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
	int t;
	int n,m,x,arr[100005];
	scanf("%d",&t);
	while(t--){
	   scanf("%d%d",&n,&m);
	   REP(i,m){
		     scanf("%d",&arr[i]);
		 }
		 sort(arr,arr+m);
		 int left=arr[0],right=arr[m-1];
		 
      int ans=0;
      REP(i,n){
		  ans=0;
         if(i>left)
         ans=max(ans,abs(i-left));
         if(i<right)
         ans=max(ans,abs(right-i));
         printf("%d",ans);
         if(i==n-1)
            printf("\n");
         else
            printf(" ");
	 }
  }
}   
