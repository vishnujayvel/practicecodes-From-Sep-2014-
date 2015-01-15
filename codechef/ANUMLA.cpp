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
  scanf("%d",&t);
  ll arr[1000005];
  int n;
  while(t--){
	  scanf("%d",&n);
	  int limit=pow(2,n);
	  REP(i,limit){
		  scanf("%lld",&arr[i]);
	  }
	 sort(arr,arr+limit);
	  vector<long long int >s;
	  map<long long int,int> alreadySum;
	  vector<long long int>keep;
	  keep.pb(0);
	  FOR(i,0,limit){
		         if(find(keep.begin(),keep.end(),arr[i])!=keep.end()){
					 if(alreadySum[arr[i]]==1){
						  
					      s.pb(arr[i]);
					      int len=keep.size();
					      REP(i,len){
							  keep.pb(keep[i]+arr[i]);
						  }
						  alreadySum[arr[i]]=0; 
					   }
					   else   
					  alreadySum[arr[i]]=1;
					  //dont do
					  
				  }
				  else{
				        s.pb(arr[i]);
				        int len=keep.size();
					      REP(j,len){
							  keep.pb(keep[j]+arr[i]);
						  }
						  alreadySum[arr[i]]=1;
			    }
			    int sSize=s.size();
			   if(sSize
			   ==n)
			      break;
		  
		  }
		  REP(i,s.size())
		     printf("%lld ",s[i]);
		  printf("\n");   
					  
                
    } 
		      
  }

