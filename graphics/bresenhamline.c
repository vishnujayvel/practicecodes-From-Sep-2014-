#include<stdio.h>
//#include<conio.h>
#include<graphics.h>
void lineBresenham(int x1,int y1,int x2,int y2){
	int dx=x2-x1;
	int dy=y2-y1;
	int p=2*dy-dx;
	int x,y,xend;
	if(x1>x2){
		x=x2;
		y=y2;
		xend=x1;
	}
	else{
		x=x1;
		y=y1;
		xend=x2;
	}
	putpixel(x,y,7);
	while(x<=xend){
		x++;
		if(p<0){
			putpixel(x,y,7);
		    p+=2*dy;
		}
		else{
			y++;
			putpixel(x,y,7);
			p+=(2*dy-2*dx);
		}
	}
		
}
	
	
	
int main(){
   int x1,y1,x2,y2;
   int gd=DETECT,gm;
   
   scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
   initgraph(&gd,&gm,NULL);
   
   lineBresenham(x1,y1,x2,y2);
   delay(50000);
}	 

