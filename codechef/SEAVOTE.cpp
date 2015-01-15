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
	int b[10005];
	int t,n;
	scanf("%d",&t);
	ll sum,diff;
	int zeroCount=0;
	while(t--){
		zeroCount=0;
		sum=0;
		scanf("%d",&n);
		REP(i,n){
			scanf("%d",&b[i]);
			sum+=b[i];
		}
		if(sum==100){
			printf("YES\n");
		}
		else if(sum<100){
			printf("NO\n");
		}
		else{
		    diff=sum-100;
		    REP(i,n){
				if(b[i]==0){
					zeroCount++;
					
				}
			}
			n-=zeroCount;
		    if(diff<n){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
}
