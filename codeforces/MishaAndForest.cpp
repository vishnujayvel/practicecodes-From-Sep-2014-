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
	int n,v,s;
	vector<pair<int,int> > arr,ans;
	
	scanf("%d",&n);
	vector<int>leaves;
	
	REP(i,n){
		scanf("%d%d",&v,&s);
		arr.pb(mp(v,s));
		if(v==1)
		   leaves.pb(i);
	}
	int l=0;
    while(l<leaves.size()){
		if(arr[leaves[l]].first==1){
		ans.pb(mp(leaves[l],arr[leaves[l]].second));
		arr[arr[leaves[l]].second].first--;
		if(arr[arr[leaves[l]].second].first==1)
		   leaves.pb(arr[leaves[l]].second);
		arr[arr[leaves[l]].second].second^=leaves[l];
		arr[leaves[l]].first--;
		
	 }
	 l++;
	}
	
	printf("%d\n",ans.size());
	REP(i,ans.size()){
		printf("%d %d\n",ans[i].first,ans[i].second);
	}
			
		
}
	
