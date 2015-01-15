
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
ll n;
ll arr[100005];
scanf("%lld",&n);

REP(i,n){
	scanf("%lld",&arr[i]);
}
ll min1=arr[0];
ll max1=arr[0];
ll start=1;
ll end =1;
for(int i=1;i<n;i++){
	if(arr[i]<min1){
		min1=arr[i];
		start=1;
		
	}
	else if(arr[i]==min1){
		start++;
	}
     else if(arr[i]>max1) {
        max1=arr[i];
        end=1;
    }
    else if(arr[i]==max1){
		end++;
	}
	
}	printf("%lld %lld\n",max1-min1,(min1==max1)?start*(start-1)/2:start*end);
}
		  
