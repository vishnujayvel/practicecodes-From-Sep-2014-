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
int n,k;
int solve(int i,vector<int> v){
	cout<<i<<" in "<<v.size()<<" and  "<<v[i+1]-v[i]<<" "<<v[i]-v[i-1]<<endl;
	if(v[i+1]-v[i]==k&&v[i]-v[i-1]==k){
		cout<<i<<" yes --> deleting "<<v[i-1]<<" "<<v[i]<<" "<<v[i+1]<<endl;
		v.erase(v.begin()+i-1,v.begin()+i+2);
		int size=v.size();
		if(size<3)
		 return size;
		int ret=size;
		
		//cout<<"size is "<<ret<<endl;
	    for(int j=1;j<size-1;j++){
			//cout<<" calling "<<j<<endl;
			ret=min(ret,solve(j,v));
		}
		return ret;
	}
	else{
		return v.size();
	}
}
int main(){
   int t;
   cin>>t;
    vector<int> v;
    cin>>n>>k;
    int x;
    REP(i,n){
	    cin>>x;
	    v.pb(x);
    }
    int ret=200;
    
    FOR(i,1,n-1){
		ret=min(ret,solve(i,v));
	}
	cout<<ret<<endl;
    
}
 
