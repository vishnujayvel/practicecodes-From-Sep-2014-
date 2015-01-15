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
   int arr[3005];
   int n,x;
   scanf("%d",&n);
   REP(i,n){
	   scanf("%d",&arr[i]);
   }
   vector<pair<int,int> >p;
   REP(i,n){
	   int min=i;
	   FOR(j,i,n){
		   if(arr[min]>arr[j]){
			   min=j;
		   }
	   }
		   if(min!=i){
			   p.pb(mp(i,min));
		   }
		       int temp=arr[i];
			   arr[i]=arr[min];
			   arr[min]=temp;
		   
	   
			   
  }
	   
   cout<<p.size()<<endl;
   REP(i,p.size())
    cout<<p[i].first<<" "<<p[i].second<<endl;
   
}
	   
		  
