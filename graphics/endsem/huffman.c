#include<stdio.h>
typedef struct tree{
  int val;
  char c;
  struct tree* left;
  struct tree* right;
}tree;

tree* makeNode(char c,int v){
	tree* node= (tree*)malloc(sizeof(tree));
	node->val=v;
	node->c=c;
	node->left=node->right=NULL;
	return node;
}
void sort(tree* t[],int size){
	int i,j;
	for( i=0;i<size;i++){
		for(j=i;j<size;j++){
			if(t[j]->val>t[i]->val){
				tree* temp;
				temp=t[j];
				t[j]=t[i];
				t[i]=temp;
			}
		}
	}
}
void print(tree* head,char arr[],int size){
	int i=0;
	if(!head->left&&!head->right){
		for(i=0;i<size;i++)
		  printf("%c\t",arr[i]);
		  printf("%c\n",head->c);
	  }
	  else{
		  arr[size++]='0';
		  print(head->left,arr,size);
		  
		  size--;
		  arr[size++]='1';
		  print(head->right,arr,size);
		  size--;
	  }
  }
int main(){
   char c;int v;
   int size=6,i;
   char ans[20]="";
   scanf("%d",&size);
   tree* arr[100];
   char t[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {5, 9, 12, 13, 16, 45};

for(i=0;i<size;i++)
{   //fflush(stdin);
  //scanf("%c %d",&c,&n);
  arr[i]=makeNode(t[i],freq[i]);
}
  sort(arr,size);
  
  while(size>1){
	  int val=arr[size-1]->val+arr[size-2]->val;
	  tree* temp=makeNode('\0',val);
	  temp->left=arr[size-1];
	  temp->right=arr[size-2];
	  size--;
	  arr[size-1]=temp;
	  sort(arr,size);
  }
  print(arr[0],ans,size);
}
  
    	
