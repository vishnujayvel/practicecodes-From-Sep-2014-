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
    int n,m,x;
    map<int,char> arr;
    char c;
    t=readInt();
    while(t--){
		arr.clear();
		n=readInt();
		m=readInt();
		REP(i,m){
		   cin>>c;
		   x=readInt();
		   arr[x]=c;
	   }
	   ll ans=1;
	   map<int,char>::iterator it=arr.begin();
	   int lastindex=it->first;
	   char lastchar=it->second;
	   it++;
	   
	   for(;it!=arr.end();it++){
		      if(lastchar!=it->second){
					   ans=ans*((ll)(it->first-lastindex)%MOD);
					   ans=ans%MOD;
			  }
				   lastindex=it->first;
	               lastchar=it->second;
	  }
	   printf("%lld\n",ans);
   }
   return 0;
	   
   }
