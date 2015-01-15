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
	int n,m;
	string str1,str2;
	
	scanf("%d%d",&n,&m);
	int f;
	map<string,pair<string,int> >m1;
	vector<string>ans;
	
	REP(i,m){
		cin>>str1>>str2;
		if(str1.size()<=str2.size()){
		        f=1;
			}
		else
		         f=2;
       m1[str1]=mp(str2,f);
   }
   REP(i,n){
      cin>>str1;
      map<string,pair<string,int> >::iterator it;
      it=m1.find(str1);
      if((it->second).second==1)
           ans.pb(it->first);
      else
          ans.pb((it->second).first);
	  }
	  REP(i,n-1)
	  cout<<ans[i]<<" ";
	  cout<<ans[n-1];
  
  }
      

   
        
		
