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
	int n,v,k,x;
	cin>>n>>v;
	vector<int> ans;
	bool s=0;
	FOR(i,0,n){
		cin>>k;
		s=0;
		REP(j,k){
			cin>>x;
			if(!s){
				if(v>x){
					ans.pb(i+1);
					s=1;
				}
			}
		}
	}
	cout<<ans.size()<<endl;
		FOR(i,0,ans.size())
			cout<<ans[i]<<" ";
  }
