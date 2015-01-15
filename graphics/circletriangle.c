#include<stdio.h>
//#include<conio.h>
#include<graphics.h>
#include<math.h>
#define round(x) (int)(x+0.5)

typedef struct p
{
	int x, y;
}point;

point rotation( point a, point ref, float theta)
{
	point t;
	theta = theta*3.14/180;
	t.x = ref.x+(a.x-ref.x)*round(cos(theta))-(a.y-ref.y)*round(sin(theta));
	t.y = ref.y+(a.x-ref.x)*round(sin(theta))+(a.y-ref.y)*round(cos(theta));
	return t;
}

void triangle(point c, int r, point p1, point p2, point p3)
{
	circle(c.x,c.y,r);
	line(p1.x,p1.y,p2.x,p2.y);
	line(p2.x,p2.y,p3.x,p3.y);
	line(p3.x,p3.y,p1.x,p1.y);
}
int main()
{
	point p1,p2,p3,c;
	int gd=DETECT, gm;
	int r, count=7;
	printf("Enter centre and radius: ");
	scanf("%d %d %d", &c.x, &c.y, &r);
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,NULL);
	p1.x=c.x-r; p1.y=c.y;
	p2.x=c.x; p2.y=c.y-r;
	p3.x=c.x+r; p3.y=c.y;
	triangle(c,r,p1,p2,p3);
	while(count)
	{
	    delay(1000);
	    cleardevice();
	    p1=rotation(p1,c,45.0);
	    p2=rotation(p2,c,45.0);
	    p3=rotation(p3,c,45.0);
	    triangle(c,r,p1,p2,p3);
	    count--;
	}
	getch();
	return 0;
}
