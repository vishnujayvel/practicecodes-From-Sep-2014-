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
	int n,a,b;
	vector<pair<int,int> >kingdoms;
	int t,ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		kingdoms.clear();
		stack<pair<int,int> >overlappingKingdoms;
	    pair<int,int> currentOverlap;
		ans=1;
		REP(i,n){
			scanf("%d%d",&a,&b);
			kingdoms.pb(mp(a,b));
		}
		sort(kingdoms.begin(),kingdoms.end());
		overlappingKingdoms.push(kingdoms[0]);
		currentOverlap=kingdoms[0];
		FOR(i,1,kingdoms.size()){
			//pair<int,int> temp=overlappingKingdoms.top();
			if(kingdoms[i].first<=currentOverlap.second){
				if(kingdoms[i].second<=currentOverlap.second){
					//eat the kingdom
					currentOverlap=kingdoms[i];
					continue;
				}
				else{
					
					currentOverlap=mp(kingdoms[i].first,currentOverlap.second);
				}
			}
			else{
					overlappingKingdoms.push(kingdoms[i]);
					currentOverlap=kingdoms[i];
			}
		}
		ans=overlappingKingdoms.size();
		printf("%d\n",ans);
	
	}
}
