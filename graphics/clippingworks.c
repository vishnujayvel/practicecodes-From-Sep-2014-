#include<stdio.h>
#include<graphics.h>

#define round(a) (int)(a+0.5)
#define left 0x1
#define right 0x2
#define down 0x4
#define top 0x8

#define inside(a) (!a)
#define reject(a,b) (a&b)
#define accept(a,b) (!(a|b))

typedef struct p
{
	int x,y;
}point;

char encode(point p, point min, point max)
{
	char code=0x00;
	if(p.x<min.x) code=code|left;
	if(p.x>max.x) code=code|right;
	if(p.y<min.y) code=code|down;
	if(p.y>max.y) code=code|top;
	return code;
}

void swap(point *p1, point *p2)
{
	point t;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
}

void swap_code(char *c1, char *c2)
{
	char t;
	t=*c1;
	*c1=*c2;
	*c2=t;
}

void clipline(point p1, point p2, point min, point max)
{
	char code1, code2;
	int done=0, draw=0;
	float m;
	while(!done)
	{
		code1=encode(p1,min,max);
		code2=encode(p2,min,max);
		if(accept(code1, code2))
		{
			done=1;
			draw=1;
		}
		else if(reject(code1, code2))
			done=1;
		else
		{
			if(inside(code1))
			{
			     swap(&p1, &p2);
			     swap_code(&code1, &code2);
			}
			m = (p2.y-p1.y)/(p2.x-p1.x);
			if(code1&left)
			{
				p1.y += (min.x-p1.x)*m;
				p1.x = min.x;
			}
			else if(code1&right)
			{
				p1.y += (max.x-p1.x)*m;
				p1.x = max.x;
			}
			else if(code1&down)
			{
				p1.x += (min.y-p1.y)/m;
				p1.y = min.y;
			}
			else if(code1&top)
			{
				p1.x += (max.y-p1.y)/m;
				p1.y = max.y;
			}
		}
	}
	if(draw)
		line(p1.x, p1.y, p2.x, p2.y);
}

int main()
{
	int gd = DETECT, gm;
	point min, max, p1, p2;
	min.x=100; min.y=100;
	max.x=200; max.y=150;
	p1.x=50; p1.y=50;
	p2.x=125; p2.y=125;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,NULL);
	line(min.x, min.y, min.x, max.y);
	line(min.x, min.y, max.x, min.y);
	line(max.x, max.y, min.x, max.y);
	line(max.x, max.y, max.x, min.y);
	line(p1.x, p1.y, p2.x, p2.y);
	delay(1000);
	cleardevice();
	line(min.x, min.y, min.x, max.y);
	line(min.x, min.y, max.x, min.y);
	line(max.x, max.y, min.x, max.y);
	line(max.x, max.y, max.x, min.y);
	clipline(p1, p2, min, max);
	getchar();
	closegraph();
	return 0;
}
