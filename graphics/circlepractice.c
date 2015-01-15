#include<stdio.h>
#include<graphics.h>
#define ROUND(x) (x+0.5)
void circle1(int xc,int yx,int r){
	int x=0;
	int y=r;
	int h=1-r;
	putpixel(x,y,15);
	while(x<y){
		x++;
		if(h<0){
			h+=2*x+1;
		}
		else{
			y--;
			
		h+=(2*(x-y)+1);
	}
	putpixel(x,y,15);
}
}
int main(){
	int gd=DETECT,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,NULL);
	circle1(100,100,50);
	getchar();
	
}
