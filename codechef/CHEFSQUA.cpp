#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back

#define ROUND(x) (x+0.5)
typedef long long int ll;
int readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}

set<pair<int,int> >s;
int returnMatchedDiagonalsFromSet(pair<int,int> p1,pair<int,int>p2){
	float x1=(float)p1.first,y1=(float)p1.second,x2=(float)p2.first,y2=(float)p2.second;
	float xc=(x1+x2)/2,yc=(y1+y2)/2,xd=(x1-x2)/2,yd=(y1-y2)/2;
	int x3=xc-yd,y3=yc+xd,x4=xc+yd,y4=yc-xd;
	int c=0;
	//cout<<"checking "<<x3<<" "<<y3<<endl;
	
	if(s.find(mp(x3,y3))!=s.end())
	   c++;
	//cout<<"checking "<<x4<<" "<<y4<<endl;
	if(s.find(mp(x4,y4))!=s.end())
	   c++;
	return c;
}
int isRotatedPointExist(pair<int,int> p,pair<int,int> r,float theta){
	float ang=(theta*3.14)/180;
	float x1=(p.first-r.first)*cos(ang)-(p.second-r.second)*sin(ang)+r.first;
	float y1=(p.first-r.first)*sin(ang)+(p.second-r.second)*cos(ang)+r.second;
//	cout<<(int)ROUND(x1)<<" "<<(int)ROUND(y1)<<endl;
	if(s.find(mp(ROUND(x1),ROUND(y1)))!=s.end()){
	//	cout<<"yes\n";
	    return 1;
	}
	else {
	  //   cout<<"no\n";
	     return 0;
	 }
}
int returnMaxMatchedSide(pair<int,int>p1,pair<int,int>p2){
	int c=0,ret=0;
	c+=isRotatedPointExist(p1,p2,90);
	c+=isRotatedPointExist(p2,p1,-90);
	
	
	ret=max(ret,c);
	c=0;
	c+=isRotatedPointExist(p1,p2,-90);
	c+=isRotatedPointExist(p2,p1,90);
	
	ret=max(ret,c);
	//cout<<"max matched is "<<ret<<endl;
	return ret;
}
	
int main(){
	int n;
	int x,y;
	//t=readInt();
	pair<int,int> p1,p2;
	 n=readInt();
		s.clear();
		REP(i,n){
			x=readInt();
			y=readInt();
			s.insert(mp(x,y));
		}
		
		if(n==0){
		  printf("4\n");
		//  continue;
		return 0;
	  }
		else if(n==1){
		  printf("3\n");
		  //continue;
		  return 0;
	    }
	    else if(n==2){
		   printf("2\n");
		   //continue;
		   return 0;
	    }
		  
    set<pair<int,int> >::iterator it,jt;
    int have=0;
    for(it=s.begin();it!=s.end();it++){
		jt=it;
		jt++;
		for(;jt!=s.end();jt++){
           //checking for diagonals
           
          			p1=*it;
          			p2=*jt;
      //    			cout<<"considering "<<p1.first<<" "<<p1.second<<" "<<p2.first<<" "<<p2.second<<endl;
          			have=max(returnMatchedDiagonalsFromSet(p1,p2),have);
		            have=max(returnMaxMatchedSide(p1,p2),have);
		}
	}

	printf("%d\n",2-have);

}
	               
		
