#include<stdio.h>
#include<graphics.h>
void storepoints(int,int,int,int,int,int,int[]);
int main()
{
int gdriver=DETECT,gmode;
int x1,x2,y1,y2,xmax,ymax,xmin,ymin,a[10],b[10],xi1,xi2,yi1,yi2,flag=0;
float m;
int i;

initgraph(&gdriver,&gmode,NULL);
printf("output");
printf("\n");
printf("enter the value of x1,y1,x2,y2:__>");
//scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
x1=10;
y1=10;
x2=100;
y2=100;
printf("enter the value of xmax,ymax,xmin,ymin:");
//scanf("%d%d%d%d",&xmax,&ymax,&xmin,&ymin);
xmax=50;
ymax=50;
xmin=0;
ymin=0;
storepoints(x2,y2,ymin,ymax,xmax,xmin,b);
for(i=1;i<=4;i++)
{
if(a[i]*b[i]==0)
flag=1;
else
flag=0;
}
if(flag==1){
m=(y2-y1)/(x2-x1);
xi1=x1;
yi1=y1;
}
if(a[1]==1)
{
yi1=ymax;
xi1=x1+((1/m)*(yi1-y1));
}
else
{
if(a[2]==1)
{
yi1=ymin;
xi1=x1+((1/m)*(yi1-y1));
}
}
if(a[3]==1)
{
xi1=xmax;
yi1=y1+(m*(xi1-x1));
}
if(a[4]==1)
{
xi1=xmin;
yi1=y1+(m*(xi1-x1));
}
else
if(b[1]==1)
{yi2=ymax;
xi2=x2+((1/m)*(yi2-y2));
}
else
if(b[2]==1)
{
yi2=ymin;
xi2=x2+((1/m)*(yi2-y2));
}
else
if(b[3]==1)
{
xi2=xmax;
yi2=y2+((1/m)*(xi2-x2));
}
else
if(b[4]==1)
{
xi2=xmin;
yi2=y2+(m*(xi2-x2));
}


initgraph(&gdriver,&gmode,NULL);
rectangle(xmin,ymin,xmax,ymax);
line(x1,y1,x2,y2);
delay(5000);
closegraph();
cleardevice();
initgraph(&gdriver,&gmode,NULL);
line(xi1,yi1,xi2,yi2);
rectangle(xmin,ymin,xmax,ymax);if(flag==0)
{
printf("\n no clipping is required");
}
getch();
closegraph();
}
void storepoints(int x1,int y1,int ymax,int xmax,int xmin,int ymin,int c[10])
{
if((y1-ymax)>0)
c[1]=1;
else
c[1]=0;
if((ymin-y1)>0)
c[2]=1;
else
c[2]=0;
if((x1-xmax)>0)
c[3]=1;
else
c[3]=0;
if((xmin-x1)>0)
c[4]=1;
else
c[4]=0;
}
