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
	ll t,n,m;
	ll arr[10];
	cin>>t;
	ll c=0;
	while(t--){
		c=0;
		cin>>n>>m;
		REP(i,n){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int ans=0;
		for(int i=n-1;i>=0;i--){
			c+=arr[i];
			ans++;
			if(c>=m){
			   break;
		   }
	  }
	  if(c<m)
	  cout<<"-1\n";
	  else
	  cout<<ans<<endl;
  }
  return 0;
}
			    
		
