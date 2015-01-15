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
    int n;
    vector<string>arr;
    scanf("%d",&t);
    string str;
    int ans;
    int dp[1005][1005];
    while(t--){
		memset(dp,0,sizeof dp);
		arr.clear();
		scanf("%d",&n);
		REP(i,n){
			cin>>str;
			arr.pb(str);
		}
		dp[0][0]=(arr[0][0]=='#')?0:1;
	dp[0][n-1]=(arr[0][n-1]=='#')?0:1;
    for(int i=n-2;i>=0;i--)
       dp[0][i]=(arr[0][i]=='#'||dp[0][i+1]==0)?0:1;
  	for(int i=1;i<n;i++){
	  
	  dp[i][n-1]=(arr[i][n-1]=='#')?0:1+dp[i-1][n-1];
  }
	FOR(i,1,n){
		for(int j=n-2;j>=0;j--){
			if(arr[i][j]=='#')
			   dp[i][j]=0;
			else if(dp[i-1][j]==0&&dp[i][j+1]==0)
			   dp[i][j]=0;
			else if(dp[i-1][j]==0&&dp[i][j+1]!=0)
			    dp[i][j]=1;
			else  
			   dp[i][j]=dp[i-1][j]+1;
		}
	}
	ans=0;
	/*REP(i,n){
	  REP(j,n){
	  cout<<dp[i][j]<<" ";
      }
      cout<<endl;
  }*/
	REP(i,n){
	//	cout<<dp[n-1][i]<<" ";
	  ans+=dp[n-1][i];
  }
    printf("%d\n",ans);
  }
}

		
		
	
