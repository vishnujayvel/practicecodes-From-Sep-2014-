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
/*int lis(vector<int> str1){
	vector<int> str2=str1;
	sort(str2.begin(),str2.end());
	int len1=str1.size();
	int len2=str2.size();
	int lcs[len1][len2];
	for(int i=0;i<=len1;i++)
	    lcs[i][0]=0;
    for(int j=0;j<=len2;j++)
       lcs[0][j]=0;
   for(int i=1;i<=len1;i++){
   	for(int j=1;j<=len2;j++){
   		if(str1[i-1]==str2[j-1])
   		   lcs[i][j]=1+lcs[i-1][j-1];
	     else
	       lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
   	}
   }
   return lcs[len1][len2];
}
*/
int lex(vector<int> p1,vector<int> p2){
	int len=min(p1.size(),p2.size());
	REP(i,len){
		if(p1[i]>p2[i])
		    return 1;
		else if(p1[i]<p2[i])
		    return 2;
    }
    if(p1.size()>len)
        return 1;
    else if(p2.size()>len)
         return 2;
    else
         return 0;
 }
		 
	   
int main(){
    vector<int> p1,p2;
    int t,n;
    cin>>t;
    int last;
    ll sum1=0,sum2=0;
    REP(i,t){
		cin>>n;
		if(n>0){
			last=1;
			 p1.pb(n);
			 sum1=sum1+(ll)(n);
	     }
	     else{
			 last=0;
			 p2.pb(-n);
			 sum2=sum2+(ll)(-n);
			 
		 }
	}
	if(sum1>sum2){
		cout<<"first";
	}
	else if(sum1<sum2){
		cout<<"second";
	}
	else{
		// cout<<"here1";
		int l1=lex(p1,p2);
		if(l1==1){
			cout<<"first";
	     }
	     else if(l1==2){
			 cout<<"second";
	      
	  }
	  else{
		//  cout<<"here2";
	      if(last==1)
	          cout<<"first";
	     else 
			 cout<<"second";
	      }
	  }
  }
  
	
	 
		
		  
