#include<stdio.h>
#include<graphics.h>
#include<math.h>
#define ROUND(a) (int)(a+0.5)
int main()
{
   int x[5],y[5];
   int i,a,b,gd=DETECT,gm;
   float ang=(45*3.14)/180;
   x[0]=200,y[0]=200;
   x[1]=300,y[1]=200;
   x[2]=300,y[2]=300;
   x[3]=200,y[3]=300;
   x[4]=200,y[4]=200;
   initgraph(&gd,&gm,NULL);
   
   for(i=0;i<4;i++)
      line(x[i],y[i],x[i+1],y[i+1]);
   for(i=0;i<4;i++){
	   a=ROUND(250+(x[i]-250)*cos(ang)-(y[i]-250)*sin(ang));
	   b=ROUND(250+(x[i]-250)*sin(ang)+(y[i]-250)*cos(ang));
	   x[i]=a;
	   y[i]=b;
   }
   x[4]=x[0];
   y[4]=y[0];
   delay(1000);
   cleardevice();
   for(i=0;i<4;i++)
      line(x[i],y[i],x[i+1],y[i+1]);
   ang=(250*3.14)/180;
   for(i=0;i<4;i++){
	   a=ROUND(x[2]+(x[i]-x[2])*cos(ang)-(y[i]-y[2])*sin(ang));
	   b=ROUND(y[2]+(x[i]-x[2])*sin(ang)+(y[i]-y[2])*cos(ang));
	   x[i]=a;
	   y[i]=b;
   }
   x[4]=x[0];
   y[4]=y[0];
   delay(500);
   //cleardevice();
   for(i=0;i<4;i++)
      line(x[i],y[i],x[i+1],y[i+1]);
   delay(1000);
   for(i=0;i<4;i++)
       x[i]=-x[i];
   x[4]=x[0];
   for(i=0;i<4;i++)
      line(x[i]+500,y[i],x[i+1]+500,y[i+1]);
   delay(1000);
  
  }
   
       
