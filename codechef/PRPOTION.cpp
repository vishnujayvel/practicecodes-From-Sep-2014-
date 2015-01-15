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
int main(){
   int t;
   int R,G,B,M;
   int r[105],g[105],b[105];
   t=readInt();
   while(t--){
	   R=readInt();
	   G=readInt();
	   B=readInt();
	   M=readInt();
	   int rc=-1,gc=-1,bc=-1;
	   
	   REP(i,R){
	     r[i]=readInt();
	     rc=max(rc,r[i]);
	 }
	   REP(i,G){
	     g[i]=readInt();
	     gc=max(gc,g[i]);
	 }
	   REP(i,B){
	     b[i]=readInt();
          bc=max(bc,b[i]);
	  }
	priority_queue<int>q;
	q.push(rc);
	q.push(gc);
	q.push(bc);
	int steps=0;
	//cout<<"start \n";
	while(steps<M){
		int t=q.top();
		//cout<<t<<endl;
		q.pop();
		q.push(t/2);
		steps++;
	}
	printf("%d\n",q.top());
  }		
}

     
   
	   
   
