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
   int t,n,m;
   int arr[105];
   cin>>t;
   while(t--){
	   cin>>n>>m;
	   int max1=-1;
	   
	   REP(i,n){
	     cin>>arr[i];
	     max1=max(max1,arr[i]);
	  }
	  int need=0;
	  REP(i,n){
		  need+=(max1-arr[i]);
	  }
	  m-=need;
	  if(m>=0&&m%n==0)
	    cout<<"Yes\n";
	  else
	    cout<<"No\n";
	    
	}
	
}
	 
	     
	    
	   
