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
	int t;
	int n,m;
	int pos[131080];
	int hole[131080];
	
	cin>>t;
	while(t--){
		cin>>n>>m;
		REP(i,n){
			cin>>pos[i];
		}
		REP(i,m){
			cin>>hole[i];
		}
		sort(pos,pos+n);
		sort(hole,hole+m);
		int max1=-1;
		int ans=INT_MAX;
		for(int i=0;i+n<m+1;i++){
			REP(j,n){
				max1=max(max1,abs(hole[i]-pos[j]));
			}
			ans=min(ans,max1);
			
		}
	cout<<ans;
   }
}
		
