#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()
{

	int x[5],y[5],i;
	int a,b;
	float ang=(45*3.14)/180;

	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);

	
	x[0]=200;y[0]=200;
	x[1]=300;y[1]=200;
	x[2]=300;y[2]=300;
	x[3]=200;y[3]=300;
	x[4]=200;y[4]=200;

	printf("DRAWING SQUARE");
	
	for(i=0;i<4;i++)
		line(x[i],y[i],x[i+1],y[i+1]);
	
	delay(2000);
	
	cleardevice();

	printf("\nROTATING SQUARE");
	
	for(i=0;i<4;i++)
	{
		a=(int)((x[i]-250)*cos(ang)-(y[i]-250)*sin(ang) + 250);	
		b=(int)((x[i]-250)*sin(ang)+(y[i]-250)*cos(ang) + 250);
		x[i]=a;
		y[i]=b;
	}
	x[i]=x[0];y[i]=y[0];

	for(i=0;i<4;i++)
		line(x[i],y[i],x[i+1],y[i+1]);

	delay(2000);

	printf("\nROTATING SQUARE AGAIN");

	ang=(250*3.14)/180;

	for(i=0;i<4;i++)
	{
		a=(int)((x[i]-x[2])*cos(ang)-(y[i]-y[2])*sin(ang) + x[2]);	
		b=(int)((x[i]-x[2])*sin(ang)+(y[i]-y[2])*cos(ang) + y[2]);
		x[i]=a;
		y[i]=b;
	}
	x[i]=x[0];y[i]=y[0];

	for(i=0;i<4;i++)
		line(x[i],y[i],x[i+1],y[i+1]);

	delay(2000);

	printf("\nREFLECTING SQUARE");

	for(i=0;i<4;i++)
	{	
		x[i]=-x[i];
	}
	x[i]=x[0];

	for(i=0;i<4;i++)
		line(x[i]+500,y[i],x[i+1]+500,y[i+1]);


	delay(5000);
	closegraph();

}
