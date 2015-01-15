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
    int n,t;
    int arr[100005];
    scanf("%d%d",&n,&t);
    REP(i,n){
		scanf("%d",&arr[i]);
	}
	int left=0;
	int ans=0;
	int sum=0;
	int current=0;
	REP(i,n){
		sum+=arr[i];
		current++;
		while(sum>t){
			current--;
			sum-=arr[left];
			left++;
	    }
	    ans=max(ans,current);
			
	}
	printf("%d",ans);
}
