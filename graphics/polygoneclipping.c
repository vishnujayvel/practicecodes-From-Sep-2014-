#include<stdio.h>
#include<graphics.h>
int main()
{
	int gm, gd=DETECT;
	initgraph(&gd, &gm,NULL);

	line(100, 100, 100, 200);
	line(200, 100, 200, 200);
	line(100, 100, 200, 100);
	line(100, 200, 200, 200);
	getch();
	line(100, 100, 250, 100);
	line(100, 100, 100, 300);
	line(250, 100, 250, 300);
	line(100, 300, 250, 300);
	getch();
	
	cleardevice();
	getch();

	line(100, 100, 100, 200);
	line(200, 100, 200, 200);
	line(100, 100, 200, 100);
	line(100, 200, 200, 200);
	getch();
	return 0;
}
