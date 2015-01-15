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
int n,t,k,temp;
int a[100005],b[100005];
scanf("%d",&t);
ll ans=0;
while(t--){
	ans=0;
	scanf("%d%d",&n,&k);
	REP(i,n){
		scanf("%d",&a[i]);
	}
	REP(i,n){
		scanf("%d",&b[i]);
		temp=k/a[i];
		ans=max(ans,(ll)temp*b[i]);
	
	}
	printf("%lld\n",ans);
}

}
	
