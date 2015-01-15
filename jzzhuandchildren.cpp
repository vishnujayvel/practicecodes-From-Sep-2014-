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
	int m,n;
	int arr[105];
	cin>>n>>m;
	int max1=-1;
	int max2=-1;
	int pos=-1;
	REP(i,n){
		cin>>arr[i];
		int temp=ceil((double)arr[i]/(double)m);
		//cout<<i<<" "<<temp<<endl;
		max2=max(max2,arr[i]);
	//	cout<<"max ?"<<max1<<endl;
		if(max1<=temp){
		//	cout<<"yes"<<endl;
			max1=temp;
			pos=i;
		}
		
	}
	int ans;
	if(max2<=m){
		ans=n;
	}
	else{
        ans=pos+1;
	}
	cout<<ans<<endl;
}
