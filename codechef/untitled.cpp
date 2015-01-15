#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#define gi(x) scanf("%lld",&x);
using namespace std;
void fastscan(long long int &x)
{
	register int c;
	x =0;
	c=getchar();
	for(;(c>47 && c<58);c=getchar())
		x = (x<<1) + (x<<3) +c -48;
}   
const int MAX=100001;
int max_size;
long long int N;
int array[100000];
class Node
{
public:
long long int *withRemainder= new long long int[3];
long long int totalSum;
}*tree;

long long int getMid(long long int s, long long int e){
return s + ((e -s)>>1);
}

void printNode(Node node){
	for(int i=0;i<3;i++){
		cout<<"with remainder "<<i<<" :"<<node.withRemainder[i]<<" ";
	}
	cout<<endl;
}
long long int countDivisibleBy3(Node node)
{   
	printNode(node);
	long long int curr,res = 0;
	for (int i = 0; i < 3; i++) {
	curr = node.withRemainder[i];
	if (i == 0)
	curr++;
	res += (curr*(curr - 1))>>1;
	}
	return res;
}

Node merge(Node left, Node right)
{
	Node res;
	int i;
	// The total sum is just the sum of the merged nodes.
	res.totalSum = (left.totalSum + right.totalSum) % 3;
	// res.withRemainder[res.totalSum]=1;
	for (i = 0; i < 3; i++)
	{
		res.withRemainder[i] += left.withRemainder[i];
		// Sums in the right node are shifted by left.totalSum
		res.withRemainder[(i + left.totalSum) % 3] += right.withRemainder[i];
	}
	return res;
}
Node getCountNode(long long int ss, long long int se, long long int l, long long int r, long long int index)
{
	if (l <= ss && r >= se)
		return tree[index];
	if (se < l || ss > r){
		Node temp;
		return temp;
	}
	long long int mid = getMid(ss,se);
	Node left = getCountNode(ss, mid, l, r, 2*index+1);
	Node right = getCountNode(mid+1, se, l, r, 2*index+2);
	Node result;
	result = merge(left, right);
	return result;
}

void update(long long int index, long long int left, long long int right, long long int pos, long long int newValue)
{
	if (left == right)
	{
		tree[index].totalSum = newValue%3;
		tree[index].withRemainder[0]=0;
		tree[index].withRemainder[1]=0;
		tree[index].withRemainder[2]=0;
		tree[index].withRemainder[tree[index].totalSum]=1;
	}
	else
	{
		long long int mid = (left + right)>>1;
		if (pos <= mid)
			update((index<<1)+ 1, left, mid, pos, newValue);
		else
			update((index+1)<<1, mid + 1, right, pos, newValue);
		tree[index] = merge(tree[(index<<1) + 1], tree[(index +1)<<1]);
	}
}


Node constructSTUtil(long long int ss, long long int se, long long int si){
	if(ss == se){
		tree[si].totalSum = array[ss]%3;
		// cout<<tree[si].totalSum<<" "<<si<<endl;
		tree[si].withRemainder[tree[si].totalSum] = 1;
		return tree[si];
	}
	long long int mid = getMid(ss, se);
	tree[si] = merge(constructSTUtil(ss, mid, (si<<1)+1), constructSTUtil(mid+1, se, (si+1)<<1));
	return tree[si];
}


// construct segment tree from the array[]
void constructST()
{
	long long int x = (int)(ceil(log2(N)));
	max_size = (1<<(x+1)) -1;
	tree = new Node[max_size];
	constructSTUtil(0, N-1, 0);
}

int main()
{
	long long int M,type,l,r,n;
	fastscan(N);
	fastscan(M);
	string s;
	cin>>s;
	getchar();
	for(n=0;n<N;n++)
	{
		array[n]=(s[n]-48)%3;
		//cout<<tree[n].totalSum<<" "<<endl;
	}
	constructST();
	while(M--)
	{
		fastscan(type);
		fastscan(l);
		fastscan(r);
		//cout<<type<<"  "<<l<<"   "<<r<<endl;
		if(type==1)
		{
			update(0,0,N-1,l-1,r);
		}
		else if(type==2)
		{
			Node res;
			res=getCountNode(0,N-1,l-1,r-1,0);
			cout<<countDivisibleBy3(res)<<endl;
		}
	}
	return 0;
}
