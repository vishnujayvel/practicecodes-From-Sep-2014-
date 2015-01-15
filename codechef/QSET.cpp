#include <iostream>
#include <cstdio>
#include <cmath>
#define gc getchar_unlocked
using namespace std;

struct Node{
  int withRemainder[3];
  int totalSum;
};

int array[100000];  // to store the input string as array
Node *st;           // root of segment tree
int n;              // size of array
int m;              // no. of queries to process
int max_size;       // size allocated for building segment tree


// fast optimized I/O 
void scanint(int &x){
  register int c = gc();
  x = 0;
  for(;(c<48 || c>57);c = gc());
  for(;c>47 && c<58;c = gc()){
    x = (x<<1) + (x<<3) + c - 48;
  }
}

// function to initialize a node to default values
void initializeNode(Node &a){
  a.totalSum = 0;
  a.withRemainder[0] = 0;
  a.withRemainder[1] = 0;
  a.withRemainder[2] = 0;
}

// getting mid of two indexes of segment tree
int getMid(int s, int e){  
  return s + (e -s)/2;  
}


// merging two nodes of segment tree
Node merge(Node left, Node right) {
  Node res = Node();
  initializeNode(res);
  res.totalSum = (left.totalSum + right.totalSum) % 3;
  for (int i = 0; i < 3; i++) {
    res.withRemainder[i] += left.withRemainder[i];
    res.withRemainder[(i + left.totalSum) % 3] += right.withRemainder[i];
  }
  return res;
}


// updating a node in segment tree according to update query
void updateValue(int index, int left, int right, int pos, int newValue){
  //initializeNode(st[index]);
  if(left == right){ 
    st[index].totalSum = newValue%3;
    st[index].withRemainder[st[index].totalSum] = 1;
  } 
  else{
    int mid = (left + right) / 2;
    if (pos <= mid)
      updateValue(index * 2 + 1, left, mid, pos, newValue);
    else
      updateValue(index * 2 + 2, mid + 1, right, pos, newValue);
    st[index] = merge(st[index * 2 + 1], st[index * 2 + 2]);
  }
}


// get the resulting node after processing the substring coutning query on segment tree
Node getCountNode(int ss, int se, int qs, int qe, int index){
  if (qs <= ss && qe >= se)
    return st[index];
  if (se < qs || ss > qe){
    Node temp=Node();
    initializeNode(temp);
    return temp;
  }
  int mid = getMid(ss, se);
  Node left = getCountNode(ss, mid, qs, qe, 2*index+1);
  Node right = getCountNode(mid+1, se, qs, qe, 2*index+2);
  Node result;
  initializeNode(result);
  result = merge(left, right);
  return result;
}


// recursive function to build segment tree
Node constructSTUtil(int ss, int se, int si){
  initializeNode(st[si]);
  if(ss == se){
    st[si].totalSum = array[ss]%3;
    st[si].withRemainder[st[si].totalSum] = 1;
    return st[si];
  }
  int mid = getMid(ss, se);
  st[si] = merge(constructSTUtil(ss, mid, si*2+1), constructSTUtil(mid+1, se, si*2+2));
  return st[si];
}


// construct segment tree from the array[]
void constructST(){
  int x = (int)(ceil(log2(n)));
  max_size = 2*(int)pow(2, x) - 1;
  st = new Node[max_size];
  constructSTUtil(0, n-1, 0);
}

void printNode(Node node){
	for(int i=0;i<3;i++){
		cout<<"with remainder "<<i<<" :"<<node.withRemainder[i]<<" ";
	}
	cout<<endl;
}
// getting final result of query from resulting node obatined after tree traversal
long long countDivisibleBy3(Node node){
  printNode(node);
  long long res = 0, curr = 0;
  for(int i = 0; i < 3; i++){
    curr = node.withRemainder[i];
    if (i == 0)
      curr++;
    res += curr * (curr - 1) / 2;
  }
  return res;
}


// driver function
int main(){
  int t,x,y;
  scanint(n); // size of input array(string)
  scanint(m); // no. of queries to process

  // taking the given input string and forming an array
  for(int i = 0; i<n; ++i)
    array[i] = getchar()-48;

  // build segment tree
  constructST();

  // processing m queries
  while(m--){
    scanint(t); // denotes type of query
    scanint(x); // other two parameters for query
    scanint(y); 

    if(t == 1) // denotes update in given input array s.t. array[x-1] = y
      updateValue(0, 0, max_size-1, x, y);

    else // make a query for range x to y both inclusive
      printf("%lld\n", countDivisibleBy3(getCountNode(0, max_size-1, x, y, 0)));
  }
  return 0;
}
