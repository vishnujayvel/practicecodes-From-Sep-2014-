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
bool compare(const pair<int,int>& a,const pair<int,int>&b){
	return a.second<b.second;
}
	
int main(){
	ll n,r,avg,a,b;
	vector<pair<int,int> >arr;
	cin>>n>>r>>avg;
	
	REP(i,n){
		cin>>a>>b;
		arr.pb(mp(a,b));
	}
	sort(arr.begin(),arr.end(),compare);
	ll grade=0;
	REP(i,n){
		grade+=arr[i].first;
	}
	ll required=avg*n-grade;
	//cout<<required<<endl;
	ll ans=0;
	for(int i=0;i<n&&required>0;i++){
		if((r-arr[i].first)<=required){
			ans+=(r-arr[i].first)*arr[i].second;
			required-=(r-arr[i].first);
			
		}
		else{
			ans+=(required)*arr[i].second;
			required=0;
		}
	}
	cout<<ans;	
			
			
		
}	
