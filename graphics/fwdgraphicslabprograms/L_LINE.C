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

point reflection( point a )
{
	point t;
	t.x = a.x*(-1);
	t.y = a.y*(-1);
	return t;
}

int main()
{
	int gd=DETECT, gm, length;
	point start, mid, end, rotated_start, ref1, ref2, ref3;
	clrscr();
	printf("Enter start point and length: ");
	scanf("%d %d %d", &start.x, &start.y, &length);
	end.x=start.x+length;
	end.y=start.y;
	initgraph(&gd, &gm,"C:\\TC\\BGI");
	line(start.x, start.y, end.x, end.y);
	getch();
	clrscr();
	mid.x = start.x+length/2;
	mid.y = start.y;
	rotated_start = rotation(start, mid, 90.0);
	line(rotated_start.x, rotated_start.y, mid.x, mid.y);
	line(mid.x, mid.y, end.x, end.y);
	/*getch();
	clrscr();
	ref1 = reflection(rotated_start);
	ref2 = reflection(mid);
	ref3 = reflection(end);
	line(ref1.x, ref1.y, ref2.x, ref2.y);
	line(ref2.x, ref2.y, ref3.x, ref3.y);*/
	getch();
	closegraph();
	return 0;
}

