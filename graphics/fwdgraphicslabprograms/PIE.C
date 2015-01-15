#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

struct point
{
	float x,y;
}pts[3];

int n, xc, yc;
float r, data[5];

void piechart(int xc, int yc, float r)
{
	int gd=DETECT, gm, code=10;
	int i, x2, y2;
	float ls, theta, total;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,NULL);
	circle(xc, yc, r);
	total = 0;
	theta = 0;
	for(i=0;i<n;i++)
		total+=data[i];
	pts[0].x = xc;
	pts[0].y = yc;
	for(i=0;i<n;i++)
	{
		theta += 2*3.14*data[i]/total;
		pts[i].x = xc + r*cos(theta);
		pts[i].y = yc + r*sin(theta);
		x2 = pts[i].x;
		y2 = pts[i].y;
		setcolor(code++);
		line(xc, 480-xc, x2, 480-y2);
		getch();
	}
}

int main()
{
	int i;
	printf("Enter no. of points: ");
	scanf("%d", &n);
	printf("Enter data: ");
	for(i=0;i<n;i++)
		scanf("%f",&data[i]);
	xc = 640/2;
	yc = 480/2;
	r = 200;
	piechart(xc, yc, r);
	getch();
	return 0;
}
