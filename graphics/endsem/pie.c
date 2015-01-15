#include<stdio.h>
//#include<conio.h>
#include<graphics.h>
#include<math.h>
void piechart(int xc,int yc){
int n,i;
float data[100],total=0;
int x,y,color=10,r=200;
float ang;
scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%f",&data[i]);
for(i=0;i<n;i++)
    total+=data[i];
int graphdriver=DETECT,graphmode;
initgraph(&graphdriver,&graphmode,NULL);    
circle(xc,yc,200);
for(i=0;i<n;i++){
	ang+=2*3.14*data[i]/total;
	x=xc+r*cos(ang);
	y=yc+r*sin(ang);
	setcolor(color++);
	line(xc,480-yc,x,480-y);
	delay(1000);
}
}	


int main()
{
piechart(640/2,480/2);
}
