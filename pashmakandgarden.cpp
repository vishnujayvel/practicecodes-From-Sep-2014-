
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
typedef long long int ll;
int main(){
int x1,y1,x2,y2,x3,y3,x4,y4;
cin>>x1>>y1>>x2>>y2;
int dx=abs(x2-x1);
int dy=abs(y2-y1);
if(dx==0){
	 x3=x1+dy;
	 y3=y1;
	 x4=x2+dy;
	 y4=y2;
 }
 else if(dy==0){
	 x3=x1;
	 y3=y1+dx;
	 x4=x2;
	 y4=y2+dx;
 }
 else if(dx==dy){
	 cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
	 return 0;
 }
 else{
	 cout<<"-1";
	 return 0;
 }
 cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
}
 	
	

		  
