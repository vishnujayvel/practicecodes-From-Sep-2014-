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
ll pair1(ll n){
	if(n<=1)
	   return 0;
	else 
	   return n*(n-1)/2;
   }
   
int main(){
	ll n,m;
	cin>>n>>m;
	ll maxans=pair1(n-m+1);
	ll minans;
	if(n%m==0){
		minans=pair1(n/m)*m;
	}
	else{
		minans=pair1((n+m-1)/m)*(n%m)+pair1(n/m)*(m-n%m);
	}
	cout<<minans<<" "<<maxans<<endl;
}

	
