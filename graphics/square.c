#include<stdio.h>
#include<graphics.h>
#include<math.h>
void drawLine(int,int,int,int);
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);

	int x1=100,y1=300,x2=500,y2=300;
	int xt,yt,xt1,yt1,xt2,yt2;
	int a,b;
	float Angle1=((-90)*3.14)/180;
	float Angle2=((90)*3.14)/180;

	drawLine(x1,y1,x2,y2);

	delay(2000);
	cleardevice();
	
	xt=(x1+x2)/2;
	yt=(y1+y2)/2;

    	a=(int)(xt+(x2-xt)*cos(Angle1)-(y2-yt)*sin(Angle1));
    	b=(int)(yt+(x2-xt)*sin(Angle1)+(y2-yt)*cos(Angle1));
	x2=a;
	y2=b;

	drawLine(x1,y1,xt,xt);
	drawLine(xt,yt,x2,y2);

	delay(2000);
	cleardevice();

	xt1=(x1+xt)/2;
	yt1=(y1+yt)/2;
	
	xt2=(xt+x2)/2;
	yt2=(yt+y2)/2;

	a=(int)(xt2+(x2-xt2)*cos(Angle1)-(y2-yt2)*sin(Angle1));
    	b=(int)(yt2+(x2-xt2)*sin(Angle1)+(y2-yt2)*cos(Angle1));
	x2=a;
	y2=b;
	a=(int)(xt1+(x1-xt1)*cos(Angle2)-(y1-yt1)*sin(Angle2));
    	b=(int)(yt1+(x1-xt1)*sin(Angle2)+(y1-yt1)*cos(Angle2));
	x1=a;
	y1=b;

	drawLine(x1,y1,xt1,yt1);
	drawLine(xt1,yt1,xt,yt);
	drawLine(xt,yt,xt2,yt2);
	drawLine(xt2,yt2,x2,y2);

	delay(5000);

}

void drawLine(int xa,int ya,int xb,int yb) 
{ 
	int Dx=xb-xa,Dy=yb-ya,steps,k; 
	float xin,yin,X=xa,Y=ya; 
	if(abs(Dx)>abs(Dy)) 
    		steps=abs(Dx); 
	else 
	    	steps=abs(Dy); 

	xin=Dx/(float)steps; 
	yin=Dy/(float)steps; 
	putpixel(round(X),round(Y),10);

	for(k=0;k<steps;k++) 
	{ 
		X=X+xin; 
		Y=Y+yin; 
		putpixel(round(X),round(Y),10); 
	} 
}
