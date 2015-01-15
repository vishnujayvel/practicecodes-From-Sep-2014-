#include<stdio.h>
#include<graphics.h>
#define ROUND(x) (x+0.5)
int main(){
	int gd=DETECT,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,NULL);
	int x[5],y[5];
	float ang=(45*3.14)/180;
	int a,b,i;
	x[0]=200,y[0]=200;
	x[1]=300,y[1]=200;
	x[2]=300,y[2]=300;
	x[3]=200,y[3]=300;
	x[4]=200,y[4]=200;
	cleardevice();
	for(i=0;i<4;i++)
	   line(x[i],y[i],x[i+1],y[i+1]);
	delay(1000);
	cleardevice();
	for(i=0;i<4;i++){
		a=(int)((x[i]-250)*cos(ang)-(y[i]-250)*sin(ang)+250);
		b=(int)((x[i]-250)*sin(ang)+(y[i]-250)*cos(ang)+250);
	    x[i]=a;
	    y[i]=b;
	}
	x[4]=x[0];
	y[4]=y[0];
	for(i=0;i<4;i++)
	   line(x[i],y[i],x[i+1],y[i+1]);
	delay(1000);
	ang=(250*3.14)/180;
	for(i=0;i<4;i++){
		a=(int)((x[i]-x[2])*cos(ang)-(y[i]-y[2])*sin(ang)+x[2]);
		b=(int)((x[i]-x[2])*sin(ang)+(y[i]-y[2])*cos(ang)+y[2]);
	    x[i]=a;
	    y[i]=b;
	}
	x[4]=x[0];
	y[4]=y[0];
	for(i=0;i<4;i++)
	   line(x[i],y[i],x[i+1],y[i+1]);
	for(i=0;i<4;i++)
	    x[i]=-x[i];
	x[4]=x[0];
	for(i=0;i<4;i++)
	   line(x[i]+500,y[i],x[i+1]+500,y[i+1]);
	getchar();
	return 0;
	}
