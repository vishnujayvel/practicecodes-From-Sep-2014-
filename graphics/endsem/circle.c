
#include<stdio.h>
//#include<conio.h>
#include<graphics.h>
void circlePlotPoints(int xc,int yc,int x,int y){
	putpixel(xc+x,yc+y,7);
	putpixel(xc-x,yc+y,7);
	putpixel(xc+x,yc-y,7);
	putpixel(xc-x,yc-y,7);
	putpixel(xc+y,yc+x,7);
	putpixel(xc-y,yc+x,7);
	putpixel(xc+y,yc-x,7);
	putpixel(xc-y,yc-x,7);
}
void circle(int xc,int yc,int r){
	int x=0;
	int y=r;
	int p=1-r;
	circlePlotPoints(xc,yc,x,y);
	while(x<y){
		x++;
		if(p<0){
			p+=2*x+1;
		}
		else{
			y--;
			p+=2*(x-y)+1;
			
		}
		circlePlotPoints(xc,yc,x,y);
	}
}
		
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	circle(100,100,50);
	delay(5000);
}

