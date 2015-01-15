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
#define MOD 1000000009
#define ROUND(x) (x+0.5)
typedef long long int ll;
pair<int,int> rotatePoint(pair<int,int> p,pair<int,int> r,float theta){
	float ang=(theta*3.14)/180;
	float x1=(p.first-r.first)*cos(ang)-(p.second-r.second)*sin(ang)+r.first;
	float y1=(p.first-r.first)*sin(ang)+(p.second-r.second)*cos(ang)+r.second;
	cout<<(int)ROUND(x1)<<" "<<(int)ROUND(y1);
	return mp(x1,y1);
}
int main(){
   	int x,y;
   	int rx,ry;
   	float theta;
   	cin>>theta;
   	cin>>x>>y;
   	cin>>rx>>ry;
   	rotatePoint(mp(x,y),mp(rx,ry),theta);
}
