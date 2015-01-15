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
int n,s,l;
int arr[100005];
int dp[1000][1000];
int solve(int left,int right){
		//cout<<left<<" "<<right<<endl;
    int ret=9999999;
    if(left==right){
		if(l==1)
		   return 1;
		 else
		   return ret;
	}
	
    if((right-left+1)<l)
        return ret;
	
    if(dp[left][right]!=-1)
       return dp[left][right];
    int min1=arr[left],max1=arr[left];
    FOR(i,left,right+1){
		min1=min(min1,arr[i]);
		max1=max(max1,arr[i]);
	}
	if((max1-min1)<=s)
	   ret=1;
    for(int k=left+l-1;k<right-l+1;k++){
		
		 ret=min(ret,solve(left,k)+solve(k+1,right));
	 }
	 	//cout<<left<<" "<<right<<" "<<ret<<endl;

	 return (dp[left][right]==ret);
 }	

int main(){
	scanf("%d%d%d",&n,&s,&l);
	memset(dp,-1,sizeof dp);
	REP(i,n){
		scanf("%d",&arr[i]);
	}
	int ans=solve(0,n-1);
	if(ans!=9999999)
	   cout<<ans;
	else
	  cout<<"-1";
}
		
