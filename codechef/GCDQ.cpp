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
int dpLeftToRight[100005];
int dpRightToLeft[100005];
int gcd(int a,int b){
	if(b==0)
	   return a;
	if(a<b)
	   return gcd(b,a);
  return gcd(b,a%b);
}
int main(){
	int t,n,q,l,r;
	int arr[100005];
	scanf("%d",&t);
	int gcd1;
	while(t--){
		scanf("%d%d",&n,&q);
		gcd1=0;
		
		FOR(i,1,n+1){
			scanf("%d",&arr[i]);
			gcd1=gcd(gcd1,arr[i]);
		    dpLeftToRight[i]=gcd1;
		}
		dpLeftToRight[0]=0;
		gcd1=0;
		for(int i=n;i>0;i--){
			gcd1=gcd(gcd1,arr[i]);
		    dpRightToLeft[i]=gcd1;
		}
		dpRightToLeft[n+1]=0;
		REP(i,q){
			scanf("%d%d",&l,&r);
		    gcd1=0;
	         gcd1=gcd(dpLeftToRight[l-1],dpRightToLeft[r+1]);
		
		printf("%d\n",gcd1);
		}
	}
}
