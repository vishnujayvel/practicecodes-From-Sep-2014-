#include <stdio.h>
#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
		int x1=100,y1=300,x2=500,y2=300;
	int xt,yt,xt1,yt1,xt2,yt2;
	int a,b;
	float Angle1=((-90)*3.14)/180;
	float Angle2=((90)*3.14)/180;


	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
	line(getmaxx()/2,0,getmaxx()/2,getmaxy());

	setcolor(BLUE);
	circle(getmaxx()/2,getmaxy()/2,150);

	setcolor(GREEN);
	circle(getmaxx()/2,getmaxy()/2,75);

	setcolor(RED);
	circle(getmaxx()/2,getmaxy()/2,25);


	delay(5000);
	closegraph();
	return 0;
}
