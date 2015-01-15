#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#define round(x) (int)(x+0.5)

typedef struct p
{
	int x, y;
}point;

point translation( point a, int tx, int ty )
{
	point t;
	t.x = a.x+tx;
	t.y = a.y+ty;
	return t;
}

point rotation( point a, point ref, float theta)
{
	point t;
	theta = theta*3.14/180;
	t.x = ref.x+(a.x-ref.x)*round(cos(theta))-(a.y-ref.y)*round(sin(theta));
	t.y = ref.y+(a.x-ref.x)*round(sin(theta))-(a.y-ref.y)*round(cos(theta));
	return t;
}

point scaling( point a, point ref, int sx, int sy)
{
	point t;
	t.x = a.x*sx+ref.x*(1-sx);
	t.y = a.y*sy+ref.y*(1-sy);
	return t;
}

point shearing( point a, point ref, int shx, int shy )
{
	point t;
	t.x = a.x-shx*(abs(a.y-ref.y));
	t.y = a.y;
	return t;
}

int main()
{
	int gd=DETECT, gm, length;
	point p1, p2, p3, p4,p5, p6, ref;
	p1.x=100; p1.y=100;
	p2.x=100; p2.y=200;
	p3.x=200; p3.y=100;
	p4.x=200; p4.y=200;
	p5.x=100; p5.y=150;
	p6.x=200; p6.y=150;
	clrscr();
	initgraph(&gd, &gm,"C:\\TC\\BGI");
	line(p1.x, p1.y, p2.x, p2.y);
	line(p3.x, p3.y, p4.x, p4.y);
	line(p5.x, p5.y, p6.x, p6.y);
	getch();
	clrscr();
	p1 = rotation(p1,p4,90.0);
	p2 = rotation(p2,p4,90.0);
	p3 = rotation(p3,p4,90.0);
	p4 = rotation(p4,p4,90.0);
	p5 = rotation(p5,p4,90.0);
	p6 = rotation(p6,p4,90.0);
	line(p1.x, p1.y, p2.x, p2.y);
	line(p3.x, p3.y, p4.x, p4.y);
	line(p5.x, p5.y, p6.x, p6.y);
	getch();
	clrscr();
	ref.x=200; ref.y=100;
	p1 = shearing(p1,ref,1,0);
	p2 = shearing(p2,ref,1,0);
	p3 = shearing(p3,ref,1,0);
	p4 = shearing(p4,ref,1,0);
	p5 = shearing(p5,ref,1,0);
	p6 = shearing(p6,ref,1,0);
	line(p1.x, p1.y, p2.x, p2.y);
	line(p3.x, p3.y, p4.x, p4.y);
	line(p5.x, p5.y, p6.x, p6.y);
	getch();
	closegraph();
	return 0;
}