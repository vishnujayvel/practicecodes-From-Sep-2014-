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

ll gcd(ll u, ll v) {
  ll t;
  while (v) {
    t = u; 
    u = v; 
    v = t % v;
  }
  return u < 0 ? -u : u;
}
int main(){
    ll l,r,a;
    cin>>l>>r;
    if(l%2==0){
		a=l;
		
	}
	else{
		a=l+1;
	}
		
     
	if(a+2<=r&&(r-l)>1)
	cout<<a<<" "<<a+1<<" "<<a+2;
    else
    cout<<"-1";
}
    
