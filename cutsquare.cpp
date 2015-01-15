#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;
int dp[105][105];
int solve(int n,int m){
	if(n==m)
	   return 1;
	if(dp[n][m]!=-1)
	   return dp[n][m];
	int ret=INT_MAX;
	for(int i=1;i<=m/2;i++)
	    ret=min(ret,solve(n,i)+solve(n,m-i));
	for(int i=1;i<=n/2;i++)
	    ret=min(ret,solve(i,m)+solve(n-i,m));
	return (dp[n][m]=ret);
}
int main(){
	int t;
	cin>>t;
	int n,m;
	while(t--){
		
	memset(dp,-1,sizeof dp);
		cin>>n>>m;
		cout<<solve(n,m)<<endl;
	}
}
