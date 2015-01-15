#include<stdio.h>
#include<graphics.h>
#define ROUND(a) ((int)(a+0.5))
#define LEFT_EDGE 0x1
#define RIGHT_EDGE 0x2
#define BOTTOM_EDGE 0x4
#define TOP_EDGE 0x8
#define INSIDE(a) (!a)
#define REJECT(a,b) (a&b)
#define ACCEPT(a,b) (!(a|b))
#define FALSE 0
#define TRUE 1


typedef struct p{
	int x,y;
}point;

unsigned char encode(point pt,point winMin, point winMax){
	unsigned char code=0x00;
	if(pt.x<winMin.x)
	    code|=LEFT_EDGE;
	if(pt.x>winMax.x)
	    code|=RIGHT_EDGE;
	if(pt.y<winMin.y)
	    code|=BOTTOM_EDGE;
	if(pt.y>winMax.y)
	    code|=TOP_EDGE;
 return code;
}
void swapPoint(point *p1, point *p2){
	point temp;
	temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void swapCode(unsigned char *code1,unsigned char *code2){
	unsigned temp=*code1;
	*code1=*code2;
	*code2=temp;
}
void clipLine(point winMin,point winMax,point p1,point p2){
	unsigned char code1,code2;
	float m;
	int done=0,draw=0;
	

