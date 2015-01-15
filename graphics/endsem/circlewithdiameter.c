#include<stdio.h>
#include<graphics.h>
#include<math.h>
#define round(a) (int)(a+0.5)

typedef struct p
{
	int x, y;
}point;

point rotation(point a, point ref, float theta)
{
	point t;
	theta = theta*3.14/180;
	t.x = round(ref.x+(a.x-ref.x)*cos(theta)-(a.y-ref.y)*sin(theta));
	t.y = round(ref.y+(a.x-ref.x)*sin(theta)+(a.y-ref.y)*cos(theta));
	return t;
}

void DDA(point a, point b)
{
	int steps, k, dx, dy;
	float x, y, xinc, yinc;
	dx = abs(b.x-a.x);
	dy = abs(b.y-a.y);
	if(dx>dy)
		steps = dx;
	else
		steps = dy;
	x = a.x;
	y = a.y;
	putpixel(x,y,1);
	xinc = dx/(float)steps;
	yinc = dy/(float)steps;
	for(k=0;k<steps;k++)
	{
		x+=xinc;
		y+=yinc;
		putpixel(x,y,1);
	}
}

void plotcircle(int, int, int, int);

void midcircle(point c, int r)
{
	int x = 0;
	int y = r;
	int p = 1-r;
	plotcircle(c.x, c.y, x, y);
	while(x<y)
	{
		x++;
		if(p<0)
			p += 2*x+1;
		else
		{
			y--;
			p += 2*(x-y)+1;
		}
		plotcircle(c.x, c.y, x, y);
	}
}

void plotcircle(int xc, int yc, int x, int y)
{
	putpixel(xc+x, yc+y, 1);
	putpixel(xc-x, yc+y, 1);
	putpixel(xc+x, yc-y, 1);
	putpixel(xc-x, yc-y, 1);
	putpixel(xc+y, yc+x, 1);
	putpixel(xc-y, yc+x, 1);
	putpixel(xc+y, yc-x, 1);
	putpixel(xc-y, yc-x, 1);
}

int main()
{
	point p1, p2, c;
	int gd=DETECT, gm, i, n;
	p1.x = 100; p1.y = 200;
	p2.x = 300; p2.y = 200;
	c.x = 200; c.y = 200;
	printf("Enter no. of rotations: ");
	scanf("%d", &n);
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, NULL);
	midcircle(c, 100);
	for(i=0;i<n;i++)
	{
		DDA(p1, p2);
		delay(100);
		p1 = rotation(p1, c, 20);
		p2 = rotation(p2, c, 20);
	}
	getch();
	closegraph();
	return 0;
}
