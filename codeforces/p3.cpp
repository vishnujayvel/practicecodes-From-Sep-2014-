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
	ll arr[3];
	ll ans=0;
    ll onezero=0,twozero=0,max1=-1,max2=-1,temp;
    REP(i,3){
       cin>>arr[i];
       if(arr[i]==0){
		   if(onezero)
		       twozero=1;
		   else
		       onezero=1;
	  }
  }
	  if(twozero){
	      printf("0\n");
	      return 0;
	  }
	  else{
		  while(!twozero){
		  if(onezero){
			     sort(arr,arr+3);
			     max1=arr[2];
			     max2=arr[1];
			     
			 	 ans+=min(max1/2,max2);
	          twozero=1;
	      }
	     else{
			 
			 temp=min(arr[0],min(arr[1],arr[2]));
			 ans+=temp;
			 REP(i,3)
			    arr[i]=arr[i]-temp;
			 onezero=1;
		 }
	 }
 }
	
	cout<<ans<<endl;
}		 
				     
			     
    	
