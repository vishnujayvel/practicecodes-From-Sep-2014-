#include <stdio.h>
#include <stdlib.h>
char *encode(char* str){
	int len=strlen(str);
	int i,j=0,k;
	char ch;
	int c;
	char temp[10];
	char *dest=(char *)malloc(sizeof(char)*(2*len+1));
	
	for(i=0;i<len;i++){
		ch=str[i];
		dest[j++]=ch;
		c=1;
		while(i+1<len&&ch==str[i+1]){
			c++;
			i++;
		}
		sprintf(temp,"%d",c);
		k=0;
		while(*(temp+k)){
			dest[j++]=temp[k++];
		}
	}
	dest[j]='\0';
	return dest;
}
	
int main()
{
  char str[] = "geeksforgeeks";    
  char *res = encode(str);
  printf("%s", res);
  getchar();
}
