#include<stdio.h>
//#include<conio.h>
#include<graphics.h>
void lineDDA(int x1,int y1,int x2,int y2){
	int i,x,y,xi,yi,dx,dy,steps;
	dx=x2-x1;
	dy=y2-y1;
	x=x1,y=y1;
	if(abs(dx)>abs(dy)){
		steps=abs(dx);
	}
	else
	  steps=abs(dy);
	xi=dx/steps;
	yi=dy/steps;
	  
	for(i=0;i<=steps;i++){
		putpixel(x,y,7);
		x+=xi;
		y+=yi;
	}
}

	
int main(){
   int x1,y1,x2,y2;
   int gd=DETECT,gm;
   
   scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
   initgraph(&gd,&gm,NULL);
   
   lineDDA(x1,y1,x2,y2);
   delay(50000);
}	 
