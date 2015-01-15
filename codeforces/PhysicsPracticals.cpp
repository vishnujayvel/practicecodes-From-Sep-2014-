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
	int n;
	int arr[100005];
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	cin>>n;
	REP(i,n)
	  cin>>arr[i];
	sort(arr,arr+n);
	int maxLength=-1;
	REP(i,n){
	int l=0,r=n;
	while(l<r){
		int mid=(r-l)/2+l;
		if(arr[mid]<=arr[i]*2)
		   l=mid+1;
		else
		   r=mid;
   }
   if(maxLength<(l-i))
       maxLength=l-i;
   }
   cout<<n-maxLength;
}
   
	
	
