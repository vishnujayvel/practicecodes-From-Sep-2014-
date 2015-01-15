#include<stdio.h>
#include<graphics.h>
#define ROUND(x) (x+0.5)
void line(int x1,int y1,int x2,int y2){
	int dx=x2-x1;
	int dy=y2-y1;
	int steps;
	int xi,yi,i;
	int x=x1,y=y1;
	if(abs(dx)>abs(dy))
	     steps=abs(dx);
	else 
	     steps=abs(dy);
	xi=dx/(float)steps;
	yi=dy/(float)steps;
	putpixel(ROUND(x),ROUND(y),15);
	for(i=0;i<steps;i++){
		x+=xi;
		y+=yi;
		putpixel(ROUND(x),ROUND(y),15);
	}
}
	    
	
int main(){
	int gd,gm;
	gd=DETECT;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,NULL);
	line(100,100,300,300);
	getchar();
	return 0;
}
