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
string s1,s2;
int dp[85][85];

map<pair<int,int>,set<string> >m;	
set<string> generateLCS(int i,int j){
	set<string>ret;
	map<pair<int,int>,set<string> >::iterator it=m.find(mp(i,j));
	if(it!=m.end())
	    return it->second;
	     
	if(i==0||j==0){
		ret.insert("");
		
		return ret;
	}
	else{
		if(s1[i-1]==s2[j-1]){
			set<string>temp=generateLCS(i-1,j-1);
			for(set<string>::iterator it=temp.begin();it!=temp.end();it++)
				ret.insert(*it+s1[i-1]);
	    }
	    else{
			if(dp[i-1][j]>=dp[i][j-1])
			   ret=generateLCS(i-1,j);
			if(dp[i][j-1]>=dp[i-1][j]){
				set<string>temp1=generateLCS(i,j-1);
			   ret.insert(temp1.begin(),temp1.end());
		   }
		}
	}
	m[mp(i,j)]=ret;
	return ret;
} 			
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	cin>>s1>>s2;
	memset(dp,0,sizeof dp);
	int l1=s1.length();
	int l2=s2.length();
	FOR(i,1,l1+1){
	  FOR(j,1,l2+1){
	     if(s1[i-1]==s2[j-1])
	       dp[i][j]=dp[i-1][j-1]+1;
	     else
	       dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	 }
   }
   set<string> ans=generateLCS(l1,l2);
   for(set<string>::iterator it=ans.begin();it!=ans.end();it++)
     cout<<*it<<endl;
 }
}
   

