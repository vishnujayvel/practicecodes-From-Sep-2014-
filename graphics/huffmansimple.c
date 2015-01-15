#include<stdio.h>
/*A node structure is created to make the huffmann tree.*/
typedef struct node 
{
  char c;
  int val;
  struct node *l,*r;
}tree;
/*This function takes a character and the number of times it occurs and makes a 
node.*/
tree* makenode(char c,int n)
{
	 tree *p;
	 p=(tree *)malloc(sizeof(tree));
	 p->c=c;
	 p->val=n;
	 p->l=p->r=NULL;
	 return p;
}
/*This print function holds the tree its size and it assigns the values to the 
bits respectively*/ 
void print(tree *t,char a[],int size)
{
	int i;
	if( !t->l && !t->r)
	{
	for(i=0;i<size;i++)
	  printf("%c\t",a[i]);
	  printf("%c\n",t->c);
	}
	else
	{   
	   a[size++]='0';
	  print(t->l,a,size);
	  size--;
	  a[size++]='1';
	  print(t->r,a,size);
	  size--;
	}
}
/*This funtion sorts the elements in order so that the priority que can be 
used.*/
void sort(tree *t[],int size)
{ int i,j;
 for( i=0;i<size;i++)
  {
   for(j=i;j<size;j++)
   {
     if(t[j]->val>=t[i]->val)
      {
       tree *temp;
       temp=t[j];
       t[j]=t[i];
       t[i]=temp;
      }
     }
   }
 }
int main()
{
	int size=6,i;
tree *t[20];
char c,a[20]="";
tree  *temp;
char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {5, 9, 12, 13, 16, 45};

for(i=0;i<size;i++){
  //fflush(stdin);
  //scanf("%c %d",&c,&n);
  t[i]=makenode(arr[i],freq[i]);
}
 sort(t,size);
 while(size>1)
{
 temp=makenode('\0',t[size-1]->val+t[size-2]->val);
 temp->l=t[size-1];
 temp->r=t[size-2];
 size--;
 t[size-1]=temp;
 sort(t,size);
}
printf("\n\nHuffman codes:\n");
print(temp,a,0);
getchar();
return 0;
}
