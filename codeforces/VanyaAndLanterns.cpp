
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
double max(double a,double b){
	if(a>b)
	  return a;
	else
	  return b;
 }
int main(){
   int n,l;
   int arr[1005];
   cin>>n>>l;
   REP(i,n){
	   cin>>arr[i];
   }
   int maxdiff=0;
   sort(arr,arr+n);
   FOR(i,1,n){
	   maxdiff=max(maxdiff,arr[i]-arr[i-1]);
   }
   double ans=(double)maxdiff/2;
   ans=max(ans,arr[0]);
   ans=max(ans,l-arr[n-1]);
   printf("%0.10lf",ans);
}
