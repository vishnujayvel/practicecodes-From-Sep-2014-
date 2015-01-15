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
vector<ll> arr;
vector<ll> temp;
 int nextint(){
	char r;
	bool start=false,neg=false;
    int ret=0;
	while(true){
		r=getchar();
		if((r-'0'<0 || r-'0'>9) && r!='-' && !start){
			continue;
		}
		if((r-'0'<0 || r-'0'>9) && r!='-' && start){
			break;
		}
		if(start)ret*=10;
		start=true;
		if(r=='-')neg=true;
		else ret+=r-'0';
	}
	if(!neg)
		return ret;
	else
		return -ret;
}
int main(){
    int t,n;
    int m[100001];
    set<int> s;
    char str[50];
    int num;
    t=nextint();
    while(t--){
		n=nextint();
		s.clear();
		FOR(i,1,n+1){
			scanf("%s",str);
			if(str[0]=='d'){
				m[i]=1;
			}
			else{
				num=nextint();
				m[i]=-num;
			}
		}
		int ans=0;
	for(int i=n;i>=1;i--){
		if(m[i]<=-1){
			m[abs(m[i])]=0;
		    m[i]=1;
		  
		}
		 if(m[i]==1){
		   ans++;
		   s.insert(i);
	   }
	}
	printf("%d\n",ans);
	 for(set<int>:: iterator it=s.begin();it!=s.end();it++)
	     printf("%d ",*it);

	 printf("\n");	    
		
		
	}
   }
			
			
