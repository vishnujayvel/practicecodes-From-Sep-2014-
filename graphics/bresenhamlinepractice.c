#include<stdio.h>
#include<graphics.h>
#define ROUND(x) (x+0.5)
void line1(int x1,int y1,int x2,int y2){
	int dx=x2-x1;
	int dy=y2-y1;
	int h=2*dy-dx;
	int x,y,xEnd;
	if(x1>x2){
		x=x2;
		y=y2;
		xEnd=x1;
	}
	else{
		x=x1;
		y=y1;
		xEnd=x2;
	}
	putpixel(ROUND(x),ROUND(y),15);
	while(x<xEnd){
		x++;
		if(h<0)
		   h+=2*dy;
		else{
			y++;
			h+=2*(dy-dx);
		}
	    putpixel(ROUND(x),ROUND(y),15);
	
    }
}
	
int main(){
	int gd,gm;
	gd=DETECT;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,NULL);
	line1(100,100,300,300);
	getchar();
	return 0;
} 	
		
		

