
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
int arr[100005];
int gcd(int a,int b){
	int temp;
	while(b>0){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
	
int main(){
   int t;
   int n;
   int a[100005];
   scanf("%d",&t);
   while(t--){
	   scanf("%d",&n);
	   REP(i,n){
		   scanf("%d",&a[i]);
	   }
	   int result=a[0],ans=-1;
	   REP(i,n){
	        result=gcd(result,a[i]);
	   }
	   if(result==1)
      printf("%d\n",n);
      else
      printf("-1\n");
   }
}
	   
   

