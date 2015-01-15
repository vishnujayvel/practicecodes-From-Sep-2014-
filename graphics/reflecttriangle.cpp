#include<iostream>
//#include<conio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{

int graphdriver=DETECT,graphmode;
int x,y,x1,a[3][3];
double b[3][3],c[3][3];
cout<<"\nEnter Ist coordinates of triangle:";
cin>>a[0][0]>>a[1][0];
cout<<"\nEnter 2nd coordinates of triangle:";
cin>>a[0][1]>>a[1][1];
cout<<"\nEnter 3rd coordinates of triangle:";
cin>>a[0][2]>>a[1][2];
cout<<"\n Enter 1. for reflection in x-axis:\n";
cout<<"\n Enter 2. for reflection in y-axis:\n";
cout<<"\n Enter 3. for reflection in both the axis:\n";
cin>>x;

initgraph(&graphdriver,&graphmode,NULL);
cleardevice();
line(320,0,320,479); //draw line y axis
line(0,240,639,240);
line(a[0][0],a[1][0],a[0][1],a[1][1]);
line(a[0][1],a[1][1],a[0][2],a[1][2]);
line(a[0][0],a[1][0],a[0][2],a[1][2]);
delay(2000);
switch(x)
{
case 1:b[0][0]=640-a[0][0];
b[0][1]=640-a[0][1];
b[0][2]=640-a[0][2];
b[1][0]=a[1][0];
b[1][1]=a[1][1];
b[1][2]=a[1][2];
line(320,0,320,479);
line(0,240,639,240);
line(b[0][0],b[1][0],b[0][1],b[1][1]);
line(b[0][1],b[1][1],b[0][2],b[1][2]);
line(b[0][0],b[1][0],b[0][2],b[1][2]);
getch();
break;
case 2:b[1][0]=480-a[1][0];
b[1][1]=480-a[1][1];
b[1][2]=480-a[1][2];
b[0][0]=a[0][0];
b[0][1]=a[0][1];
b[0][2]=a[0][2];
line(320,0,320,479);
line(0,240,639,240);
line(b[0][0],b[1][0],b[0][1],b[1][1]);
line(b[0][1],b[1][1],b[0][2],b[1][2]);
line(b[0][0],b[1][0],b[0][2],b[1][2]);
getch();
break;case 3: b[0][0]=640-a[0][0];
b[0][1]=640-a[0][1];
b[0][2]=640-a[0][2];
b[1][0]=a[1][0];
b[1][1]=a[1][1];
b[1][2]=a[1][2];
line(320,0,320,479);
line(0,240,639,240);
line(b[0][0],b[1][0],b[0][1],b[1][1]);
line(b[0][1],b[1][1],b[0][2],b[1][2]);
line(b[0][0],b[1][0],b[0][2],b[1][2]);
cout<<"now in y";
b[1][0]=480-a[1][0];
b[1][1]=480-a[1][1];
b[1][2]=480-a[1][2];
b[0][0]=a[0][0];
b[0][1]=a[0][1];
b[0][2]=a[0][2];
line(320,0,320,479);
line(0,240,639,240);
line(b[0][0],b[1][0],b[0][1],b[1][1]);
line(b[0][1],b[1][1],b[0][2],b[1][2]);
line(b[0][0],b[1][0],b[0][2],b[1][2]);
getch();
break;
}
getch();
closegraph();
}
