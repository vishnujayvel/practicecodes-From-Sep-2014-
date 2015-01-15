#include <stdio.h>
#include <graphics.h>
#include<math.h>
void circleMidpoint(int, int, int);
void refl2(int,int,int,int);
void refl3(int,int,int,int);
void refl4(int,int,int,int);
void drawCircle(int, int, int, int);
int main()
{
	int xc, yc, r;
	int gd = DETECT, gm;
	initgraph(&gd, &gm,NULL);
	xc=200;
	yc=200;
	r=100;
	circleMidpoint(xc, yc, r);
	delay(6000);
}
void circleMidpoint(int xc, int yc, int r)
{
	int x = 0, y = r;
	int p = 1 - r;
	printf("QUADRANTS\n");
	printf("   I\t    II\t    III\t    IV\n");
	/*printf("%d,%d\t",x+xc,y+yc);
	printf("%d,%d\t",y+xc,x+yc);
	//putpixel(xc+x, yc+y, RED);
	refl2(xc, yc, x, y);
	refl3(xc, yc, x, y);
	refl4(xc, yc, x, y);
	refl2(xc, yc, y, x);
	refl3(xc, yc, y, x);
	refl4(xc, yc, y, x);*/
	while (x < y)
	{
		//drawCircle(xc, yc, x, y);
		x++;
		if (p < 0)
			p = p + 2 * x + 1;
		else
		{
			y--;
			p = p + 2 * (x - y) + 1;
		}
		drawCircle(xc, yc, x, y);
		/*printf("%d,%d\t",x+xc,y+yc);
		printf("%d,%d\t",y+xc,x+yc);
		//putpixel(xc+x, yc+y, RED);
		refl2(xc, yc, x, y);
		refl3(xc, yc, x, y);
		refl4(xc, yc, x, y);
		refl2(xc, yc, y, x);
		refl3(xc, yc, y, x);
		refl4(xc, yc, y, x);*/
	}	
}
void refl2(int xc, int yc, int x, int y)
{
	y=-y;
	//printf("%d,%d\t",x+xc,y+yc);
	putpixel(xc+x, yc+y, RED);
}
void refl3(int xc, int yc, int x, int y)
{
	x=-x;
	//printf("%d,%d\t",x+xc,y+yc);
	putpixel(xc+x, yc+y, RED);
}
void refl4(int xc, int yc, int x, int y)
{
	int xt,yt;
	float ang=(90 *3.14)/180;
	x=-x;
    	xt=(int)(x*cos(ang)-y*sin(ang));
    	yt=(int)(x*sin(ang)+y*cos(ang));
    	x=xt;
    	y=yt;
	//printf("%d,%d\n",x+xc,y+yc);
	putpixel(xc+x, yc+y, RED);
}

void drawCircle(int xc, int yc, int x, int y)
{
	putpixel(xc+x, yc+y, RED);	
	//printf("%d,%d\t",x+xc,y+yc);
	refl2(xc, yc, x, y);
	refl3(xc, yc, x, y);
	refl4(xc, yc, x, y);
	putpixel(xc+y, yc+x, RED);
	//printf("%d,%d\t",y+xc,x+yc);
	refl2(xc, yc, y, x);
	refl3(xc, yc, y, x);
	refl4(xc, yc, y, x);
}
