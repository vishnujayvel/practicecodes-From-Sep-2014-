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
unsigned char encode (point pt,point winMin,point winMax){
	unsigned char code=0x00;
	if(pt.x<winMin.x)
	   code=code|LEFT_EDGE;
	if(pt.x>winMax.x)
	   code=code|RIGHT_EDGE;
	if(pt.y<winMin.y)
	   code=code|BOTTOM_EDGE;
	if(pt.y>winMax.y)
	   code=code|TOP_EDGE;
	return code;
}
void swapPoints(point *a,point *b){
	point t;
	t=*a;
	*a=*b;
	*b=t;
}
void swapCodes(unsigned char *c1,unsigned char *c2){
	unsigned char temp;
	temp=*c1;
	*c1=*c2;
	*c2=temp;
}
void clipLine(point winMin,point winMax,point p1,point p2){
	unsigned char code1,code2;
	int done=FALSE,draw=FALSE;
	float m;
	while(!done){
		code1=encode(p1,winMin,winMax);
		code2=encode(p2,winMin,winMax);
		if(ACCEPT(code1,code2)){
	        done=TRUE;
	        draw=TRUE;
		}
		else{
			if(REJECT(code1,code2))
			    done=TRUE;
			else {
				if(INSIDE(code1)){
				swapPoints(&p1,&p2);
				swapCodes(&code1,&code2);
			    }
				if(p2.x!=p1.x)
				    m=(p2.y-p1.y)/(p2.x-p1.x);
				if(code1&LEFT_EDGE){
					p1.x=winMin.x;
					p1.y+=(winMin.x-p1.x)*m;
				}
				else{
					if(code1&RIGHT_EDGE){
						p1.x=winMax.x;
						p1.y+=(winMax.x-p1.x)*m;
					}
					else if(code1&TOP_EDGE){
						if(p2.x!=p1.x)
						p1.x=p1.x+(winMax.y-p1.y)/m;
						p1.y=winMax.y;
					}
					else if(code1&BOTTOM_EDGE){
						if(p2.x!=p1.x)
						p1.x=p1.x+(winMin.y-p1.y)/m;
						p1.y=winMin.y;
					}
				}
			}
		}
	
}
		if(draw)
		  line(ROUND(p1.x),ROUND(p1.y),ROUND(p2.x),ROUND(p2.y));
	}
int main(){
	int gd=DETECT,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,NULL);
	point winMin,winMax,p1,p2;
	line(50,50,125,125);
	winMin.x=100;
	winMin.y=100;
	winMax.x=200;
	winMax.y=200;
	p1.x=50;
	p1.y=50;
	p2.x=125;
	p2.y=125;
	printf("Clearing ");
	delay(5000);
	clipLine(winMin,winMax,p1,p2);
	getchar();
	return 0;
}
	
						
					
					
				
	
	
		
