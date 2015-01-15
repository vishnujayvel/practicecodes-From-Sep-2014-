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
	int n,v;
	int a,b;
	map<int,int>m;
	REP(i,3001){
		m[i]=0;
	}
	int maxday=-1;
	cin>>n>>v;
	REP(i,n){
		cin>>a>>b;
		m[a]=b;
		maxday=max(maxday,a);
	}
	int ans=0;
	int limit;
	FOR(i,1,maxday+2){
      limit=v;
      if(m[i-1]>0&&limit>0){
		  if(m[i-1]>=limit){
			  ans+=limit;
			  m[i-1]-=limit;
			  limit=0;
		  }
		  else{
		    ans+=m[i-1];
		    limit-=m[i-1];
		    m[i-1]=0;
		    
		  }
     }
     if(limit>0&&m[i]!=0){
		 if(m[i]>=limit){
			  ans+=limit;
			  m[i]-=limit;
			  limit=0;
		  }
		  else{
		    ans+=m[i];
		    limit-=m[i];
		    m[i]=0;
		    
		  }
   }
}
   cout<<ans<<endl;
}
   
