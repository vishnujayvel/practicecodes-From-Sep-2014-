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
	int n,arr[1000];
	cin>>n;
	vector<int> d;
	REP(i,n){
		cin>>arr[i];
		
	 
	}
	FOR(i,2,n-1){
		d.pb(arr[i]-arr[i-2]);
	}
	sort(d.begin(),d.end());
	if(n==3)
	  cout<<d[0];
	else
	  cout<<d[1];
	
	
}
	            	
