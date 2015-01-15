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
	int x,y;
	int n;
	cin>>x>>y>>n;
	int z=y-x;
    int sign=((int)ceil((double)n/(double)3))%2;
    int term=n%3;
    int ans;
    
		 switch(term){
			 case 0:ans=z;
			        break;
			 case 1:ans=x;
					break;
		     case 2:ans=y;
		            break;
		}
  if(sign==0){
	  ans=(-ans);
  }
  if(ans<0)
     ans=ans+1000000007;
   else
    ans=ans%1000000007;
  cout<<ans<<endl;
}
