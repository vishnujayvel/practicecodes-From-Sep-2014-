#include<iostream>
#include<queue>
#include<map>
#include<climits>
#include<stack>
#include<stdio.h>
using namespace std;
map<int,int> m;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data){
	struct node* node=new(struct node);
	node->data=data;
	node->left=node->right=NULL;
	return node;
	
}
struct node* insert(struct node* node,int data){
	if(node==NULL)
	  return (newNode(data));
    if(data<node->data)
        node->left=insert(node->left,data);
    else
        node->right=insert(node->right,data);
        return node;
        
}
void verticalSum(node* node,int col){
	if(node==NULL)
	   return;
     map<int,int>::iterator it=m.find(col);
     if(it==m.end())
         m[col]=node->data;
      
     verticalSum(node->left,col-1);
     verticalSum(node->right,col+1);
}
int main(){
	int n,x;
	struct node* head;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		head=insert(head,x);
	}
	verticalSum(head,0);
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
	    printf("%d ",it->second);
   return 0;
 }
	
	
