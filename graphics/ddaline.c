#include<stdio.h>
//#include<conio.h>
#include<graphics.h>
void lineDDA(int x1,int y1,int x2,int y2){
	int dx=x2-x1;
	int dy=y2-y1;
	int steps,xi,yi;
	int x=x1,y=y1,i;
	if(abs(dx)>abs(dy)){
		steps=abs(dx);
	}
	else{
		steps=abs(dy);
	}
	xi=dx/steps;
	yi=dy/steps;
	
	putpixel(x,y,7);
	for(i=0;i<steps;i++){
		x+=xi;
		y+=yi;
		putpixel(x,y,7);
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
