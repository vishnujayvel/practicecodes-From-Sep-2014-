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
ll min(ll a,ll b){
	if(a<b)
	   return a;
	else
	   return b;
}
ll max(ll a,ll b){
	if(a>b)
	   return a;
	else
	   return b;
}
int main(){
    int n;
    
    ll arr[100005];
    scanf("%d",&n);
    REP(i,n){
		cin>>arr[i];
	}
	int l=-1,r=-1;
	//left
	FOR(i,1,n){
		if(arr[i]<arr[i-1]){
			l=i-1;
			break;
         }
	}
	
	
	for(int i=n-2;i>=0;i--){
	    if(arr[i+1]<arr[i]){
			r=i+1;
			break;
		}
	}
	if(l==-1&&r==-1){
	   printf("yes\n1 1\n");
	   return 0;
   }
	int flag=1;
	reverse(arr+l,arr+r+1);
	FOR(i,1,n){
		if(arr[i]<arr[i-1]){
			flag=0;
			break;
		}
	}
	if(flag)
	   cout<<"yes\n"<<l+1<<" "<<r+1<<endl;
	else
	   printf("no\n");
   }   
	   
	     
