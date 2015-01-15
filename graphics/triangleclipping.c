#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#define MAX1 20
#define round(a) ((int)(a+0.5))
void drawline(int x1,int y1,int x2,int y2)
{
	float x,y,xincr,yincr,dx,dy,steps;
	int l;
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
	{
	steps=abs(dx);
	}
	else
	{
	steps=abs(dy);
	}
	xincr=dx/(float)steps;
	yincr=dy/(float)steps;
	x=x1;
	y=y1;
	putpixel(round(x),round(y),2);
	for(l=0;l<steps;l++)
	{
		x=x+xincr;
		y=y+yincr;
		putpixel(round(x),round(y),2);
	}
	getch();
}

enum { TOP = 1, BOTTOM = 2, RIGHT = 4, LEFT =8 };

enum { FALSE, TRUE };
typedef unsigned int outcode;

outcode compute_outcode(int x, int y,
		int xmin, int ymin, int xmax, int ymax)
{
    outcode oc = 0;

    if (y > ymax)
	oc |= TOP;
    else if (y < ymin)
	oc |= BOTTOM;


    if (x > xmax)
	oc |= RIGHT;
    else if (x < xmin)
	oc |= LEFT;

    return oc;
}

void cohen_sutherland (double x1, double y1, double x2, double y2,
		double xmin, double ymin, double xmax, double ymax)
{
    int accept;
    int done;
    outcode outcode1, outcode2;

    accept = FALSE;
    done = FALSE;

    outcode1 = compute_outcode (x1, y1, xmin, ymin, xmax, ymax);
    outcode2 = compute_outcode (x2, y2, xmin, ymin, xmax, ymax);
    do
    {
	if (outcode1 == 0 && outcode2 == 0)
	{
	    accept = TRUE;
	    done = TRUE;
	}
	else if (outcode1 & outcode2)
	{
	    done = TRUE;
	}
	else
	{
	    double x, y;
	    int outcode_ex = outcode1 ? outcode1 : outcode2;
	    if (outcode_ex & TOP)
	    {
		x = x1 + (x2 - x1) * (ymax - y1) / (y2 - y1);
		y = ymax;
	    }

	    else if (outcode_ex & BOTTOM)
	    {
		x = x1 + (x2 - x1) * (ymin - y1) / (y2 - y1);
		y = ymin;
	    }
	    else if (outcode_ex & RIGHT)
	    {
		y = y1 + (y2 - y1) * (xmax - x1) / (x2 - x1);
		x = xmax;
	    }
	    else
	    {
		y = y1 + (y2 - y1) * (xmin - x1) / (x2 - x1);
		x = xmin;
	    }
	    if (outcode_ex == outcode1)
	    {
		x1 = x;
		y1 = y;
		outcode1 = compute_outcode (x1, y1, xmin, ymin, xmax, ymax);
	    }
	    else
	    {
		x2 = x;
		y2 = y;
		outcode2 = compute_outcode (x2, y2, xmin, ymin, xmax, ymax);
	    }
	}
    } while (done == FALSE);

    if (accept == TRUE)
	drawline (x1, y1, x2, y2);
}



int main()
{
    int n;
    int i, j;
    int ln[MAX1][4];
    int clip[4];
    int gd = DETECT, gm;
    float a[]={100,100,250,250};
    float b[]={200,350,350,200};
   /* float c[]={150,200,400,200};
    float d[]={300,350,600,350}; */
    float c[]={200,200,350,350};
    float d[]={100,300,300,100};
    float xmin,xmax,ymin,ymax;


 initgraph(&gd,&gm,NULL);


 for(i=0;i<3;i++)
   drawline(a[i],b[i],a[i+1],b[i+1]);
  drawline(a[3],b[3],a[0],b[0]);
  delay(1000);
 
 for(i=0;i<3;i++)
   drawline(c[i],d[i],c[i+1],d[i+1]);
  drawline(c[3],d[3],c[0],d[0]);


  delay(1000);
    cleardevice();
    xmin=100;
    xmax=250;
    ymin=200;
    ymax=350;
    for (i=0; i<3; i++)
    {
	cohen_sutherland (c[i], d[i], c[i+1], d[i+1],xmin,ymin,xmax,ymax);

    }
	cohen_sutherland (c[3],d[3],c[0],d[0],xmin,ymin,xmax,ymax);
    xmin=200;
    xmax=350;
    ymin=100;//250
    ymax=300;//275
    for (i=0; i<3; i++)
    {
	cohen_sutherland (a[i],b[i],a[i+1],b[i+1],xmin,ymin,xmax,ymax);

    }
		cohen_sutherland (a[3],b[3],a[0],b[0],xmin,ymin,xmax,ymax);

	delay(10000);


    closegraph();
}
