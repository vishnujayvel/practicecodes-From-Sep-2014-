#include<stdio.h>
#include<graphics.h>

int main()
{
   int val1=100,val2=50;
   int x=100,y=100;
   int gd,gm;
    int count=10,i;
   gd=DETECT;
   detectgraph(&gd,&gm);
   initgraph(&gd,&gm,NULL);
  
   while(count--&&x<640){
	   
	   for(i=0;i<val2;i++){
		   x++;
		   y--;
		   putpixel(x,y,15);
	   }
	   for(i=0;i<val2;i++){
		   x++;
		   y++;
		   putpixel(x,y,15);
	   }
	   line(x,y,x+val1,y);
	   x+=val1;
  }
  getchar();
  return 0;
}
