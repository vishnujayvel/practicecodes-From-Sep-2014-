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
    int n,x,a,b;
    vector<pair<int,int> >arr;
    scanf("%d%d",&n,&x);
    REP(i,n){
		scanf("%d%d",&a,&b);
		arr.pb(mp(a,b));
	}
	sort(arr.begin(),arr.end());
	ll ans=0;
	ans+=(ll)(arr[0].first-1)%x;
	ans+=(ll)(arr[0].second-arr[0].first+1);
	FOR(i,1,n){
		
		ans+=(ll)(arr[i].first-(arr[i-1].second+1))%x;
	    ans+=(ll)(arr[i].second-arr[i].first+1);
	}
	
	cout<<ans<<endl;

	
}
