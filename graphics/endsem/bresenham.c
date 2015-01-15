
#include<stdio.h>
//#include<conio.h>
#include<graphics.h>
void line(int xa,int ya,int xb,int yb){
	int dx=abs(xa-xb);
	int dy=abs(ya-yb);
	int p=2*dy-dx;
	int x,y,xEnd;
	if(xa<xb){
		x=xa;
		y=ya;
		xEnd=xb;
	}
	else{
		x=xb;
		y=yb;
		xEnd=xa;
	}
	while(x<xEnd){
		x++;
		if(p<0){
			p+=2*dy;
		}
		else{
			y++;
			p+=2*(dy-dx);
		}
		putpixel(x,y,7);
	}
}

	
int main(){
   int x1,y1,x2,y2;
   int gd=DETECT,gm;
   
   scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
   initgraph(&gd,&gm,NULL);
   
   line(x1,y1,x2,y2);
   delay(50000);
}	 
