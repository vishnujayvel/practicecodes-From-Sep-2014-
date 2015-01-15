#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
typedef long long int ll;
struct node{
	char value;
	int weight;
	node* left;
	node* right;
	node(char v = 0, int w = -1){
		value=v;
		weight=w;
		left=NULL;
		right=NULL;
	}
	
    node(node* child1,node* child2){
		value=0;
		weight=child1->weight+child2->weight;
		left=child1;
		right=child2;
}
	bool operator<(const node a) const{
		return weight<a.weight;
		
	}
	
	bool operator>(const node a) const{
		return weight>a.weight;
		
	}
	void traverse( string code = "" )  const;
	
	
};
void node::traverse( string code ) const
{
    if (left) {
        left->traverse( code + '0' );
        right->traverse( code + '1' );
    } else {
        cout <<" " <<value <<"      ";
        cout <<setw( 2 ) <<weight;
        cout <<"     " <<code <<endl;
    }
}
struct node* newNode(char value,int freq){
	struct node* node =new(struct node);
	node->value=value;
	node->weight=freq;
	return node;
	
}
struct node* newNode(node* child1,node* child2){
		struct node* node =new(struct node);
		node->value=0;
		node->weight=child1->weight+child2->weight;
		node->left=child1;
		node->right=child2;
}
int main(){
	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {5, 9, 12, 13, 16, 45};
    priority_queue<node,vector<node>, greater<node> > q;
    int size=6;
  //  priority_queue<node*,vector<node*>,greater<node*> >q;
    for(int i=0;i<size;i++){
		q.push(node(arr[i],freq[i]));
	}
	
	while ( q.size() <1 ) {
        node *child0 = new node( q.top() );
        q.pop();
        node *child1 = new node( q.top() );
        q.pop();
        q.push( node( child0, child1 ) );
    }

	q.top().traverse();
} 


