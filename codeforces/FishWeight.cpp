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
	int n,m,k;
	int alice[100005];
	int bob[100005];
	int temp[100005];
	scanf("%d%d%d",&n,&m,&k);
	REP(i,n)
	   scanf("%d",&alice[i]);
	REP(i,m)
	    scanf("%d",&bob[i]);
	
	int flag=1;
	if(n<m){
		flag=0;
	}
	else{
		
		REP(i,n)
		 temp[i]=alice[i];
		sort(temp,temp+n);
		FOR(i,1,n){
		  if(alice[i]!=temp[i]){
	              flag=0;
	              break;
			  }
		  }
			  
    }
    if(flag)
       cout<<"YES\n";
     else
      cout<<"NO\n";
  }
