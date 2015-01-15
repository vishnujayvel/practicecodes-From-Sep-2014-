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
   int n,m,k,l,r,d;
   ll arr[100005];
   cin>>n>>m>>k;
   REP(i,n)
      cin>>arr[i];
   REP(i,m){
	   cin>>l>>r>>d;
	   arr[l]+=d;
	   arr[r+1]-=d;
   }
   ll sum=0;
   REP(i,n){
	   sum+=arr[i];
	   arr[i]=sum;
   }
   
   REP(i,k){
	   cin>>l>>r;
	   ll ans=0;
	   FOR(j,l,r+1)
	      ans+=arr[i];
	   cout<<ans<<endl;
   }
}
	   
