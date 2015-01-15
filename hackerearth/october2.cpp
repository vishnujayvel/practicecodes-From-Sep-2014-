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
map<int,int>m;
ll solve(int n){
	if(n==1)
	  return 0;
	if(m.find(n)!=m.end()){
	   return m[n];
   }
	if(n%2==0)
	   return (m[n]=1+solve(n/2));
	for(int i=3;i<=sqrt(n);i=i+2)
	    if(n%i==0)
	   return (m[n]=1+solve(n/i));
    return (m[n]=1);	
}
void findPrimeFactors(int n)
{
     while (n%2 == 0)
    {
        m[2]++;
        n = n/2;
    }
 
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            m[i]++;
            n = n/i;
        }
    }
 
    if (n > 2)
        m[n]++;
}
int main(){
	int t,a,b;
	scanf("%d",&t);
	m.clear();
	while(t--){
		
		scanf("%d%d",&a,&b);
		ll sum=0;
		FOR(i,a,b+1){
			sum+=solve(i);  
		}
		printf("%lld\n",sum);
	}
}
		
