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
ll dp[5005][5005];
ll arr[5005];

int n,m,k;
ll sum(int i,int j){
	
	if(i!=0)
	return arr[j]-arr[i-1];
	else
	return arr[j];
}
ll solve(int i,int j){
	if(j==0)
	   return 0;
	   
	if(i<0){
		 return (ll)-999999999999999999;
	 }
	 if(dp[i][j]!=-1)
	    return dp[i][j];
	 return (dp[i][j]=max(sum(i-m+1,i)+solve(i-m,j-1),solve(i-1,j)));
 } 
 
int main(){
	cin>>n>>m>>k;
   cin>>arr[0];
   FOR(i,1,n){
    cin>>arr[i];
    arr[i]+=arr[i-1];
   }
    
    memset(dp,-1, sizeof dp);
   cout<<solve(n,k);
   
}
