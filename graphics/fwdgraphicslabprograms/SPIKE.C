#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
	int val1, val2, gd=DETECT, gm, i, x=100, y=100, count=10;
	printf("Enter values: ");
	scanf("%d %d", &val1, &val2);
	val2=val2/2;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	while(count)
	{
		line(x, y, x+val1, y);
		x = x+val1;
		for(i=0;i<val2;i++)
			putpixel(x++, y--, 15);
		for(i=0;i<val2;i++)
			putpixel(x++, y++, 15);
		count--;
	}
	getch();
	closegraph();
	return 0;
}