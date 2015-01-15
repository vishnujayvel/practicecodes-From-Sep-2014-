
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#define round(x) (int)(x+0.5)

typedef struct p
{
	int x, y;
}point;

point translate( point a, int tx, int ty )
{
	point t;
	t.x = a.x+tx;
	t.y = a.y+ty;
	return t;
}

point rotation( point a, point ref, float theta)
{
	point t;
	theta = theta*3.14/180;
	t.x = ref.x+(a.x-ref.x)*round(cos(theta))-(a.y-ref.y)*round(sin(theta));
	t.y = ref.y+(a.x-ref.x)*round(sin(theta))-(a.y-ref.y)*round(cos(theta));
	return t;
}

point reflection( point a )
{
	point t;
	t.x = a.x*(-1);
	t.y = a.y*(-1);
	return t;
}

int main()
{
	int gd=DETECT, gm, length;
	point start, mid, end, rotated_start, ref1, ref2, ref3,trans1,trans2,trans3,out1,out2,out3;
//	clrscr();
	printf("Enter start point and length: ");
	scanf("%d %d %d", &start.x, &start.y, &length);
	end.x=start.x+length;
	end.y=start.y;
		detectgraph(&gd, &gm);
	initgraph(&gd,&gm,NULL);
	cleardevice();
	//draw ine
	line(start.x, start.y, end.x, end.y);
	delay(1000);
	//clrscr();
	cleardevice();
	mid.x = start.x+length/2;
	mid.y = start.y;
	rotated_start = rotation(start, mid, 90.0);
	line(rotated_start.x, rotated_start.y, mid.x, mid.y);
	line(mid.x, mid.y, end.x, end.y);
	delay(1000);
	//cleardevice();
	trans1=translate(mid,-rotated_start.x,-rotated_start.y);
	trans2=translate(rotated_start,-rotated_start.x,-rotated_start.y);
	trans3=translate(end,-rotated_start.x,-rotated_start.y);
	
	ref1 = reflection(trans1);
	ref2 = reflection(trans2);
	ref3 = reflection(trans3);
	
	out1=translate(ref1,rotated_start.x,rotated_start.y);
	out2=translate(ref2,rotated_start.x,rotated_start.y);
	out3=translate(ref3,rotated_start.x,rotated_start.y);
	
	
	out1=translate(ref1,end.x,end.y);
	out2=translate(ref2,end.x,end.y);
	out3=translate(ref3,end.x,end.y);
	
	line(out3.x, out3.y, out1.x, out1.y);
	line(out1.x,out1.y,out2.x,out2.y);
	//line(ref2.x, ref2.y, ref3.x, ref3.y);
	delay(3000);
	closegraph();
	return 0;
}

