#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void draw_triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);
	line(x3, y3, x1, y1);
}
void rotate_triangle(int x, int y, int r, int mid)
{
	getch();
	clrscr();
	circle(x,y,r);
	draw_triangle(x-r, y, x, y+r, x+r, y);
	getch();
	clrscr();
	circle(x,y,r);
	draw_triangle(x-mid, y+mid, x+mid, y+mid, x+mid, y-mid);
	getch();
	clrscr();
	circle(x,y,r);
	draw_triangle(x, y+r, x+r, y, x, y-r);
	getch();
	clrscr();
	circle(x,y,r);
	draw_triangle(x+mid, y+mid, x+mid, y-mid, x-mid, y-mid);
	getch();
	clrscr();
	circle(x,y,r);
	draw_triangle(x-r, y, x+r, y, x, y-r);
	getch();
	clrscr();
	circle(x,y,r);
	draw_triangle(x+mid, y-mid, x-mid, y-mid, x-mid, y+mid);
	getch();
	clrscr();
	circle(x,y,r);
	draw_triangle(x, y-r, x-r, y, x, y+r);
	getch();
	clrscr();
	circle(x,y,r);
	draw_triangle(x-mid, y-mid, x-mid, y+mid, x+mid, y+mid);
}

int main()
{
	int x, y, r, gd=DETECT, gm=DETECT;
	float mid;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	printf("Enter x, y, r:\n");
	scanf("%d %d %d", &x, &y, &r);
	mid = (float)r/sqrt(2);
	rotate_triangle(x,y,r,mid);
	getch();
	closegraph();
	return 0;
}