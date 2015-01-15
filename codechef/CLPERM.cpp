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
//logic: minimum number that cannot be formed is minimum(sum of first i numbers + 1 that is not available in the given set)
//http://stackoverflow.com/questions/27746549/find-minimum-sum-that-cannot-be-formed/27746987#27746987
 int read_int(){
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
ll sum(ll left,ll right){
	return (ll)(right*(right+1LL)/2LL-left*(left-1LL)/2LL);
}
int main(){
	int t,n,k;
	int b[100005];
	t=read_int();
	while(t--){
		n=read_int();
		k=read_int();
		FOR(i,1,k+1){
			b[i]=read_int();
		}
		b[0]=0;
		b[k+1]=n+1;
		sort(b,b+k+2);
		
		ll minimum=0;
		int left,right;
		FOR(i,1,k+2){
			left=b[i-1]+1;
			right=b[i]-1;
			if((left<=right)&&left>minimum+1)
				break;
		//	cout<<"adding "<<max(0LL,sum(left,right));
			minimum+=max(0LL,sum(left,right));	
		}
		minimum++;
		//cout<<minimum<<endl;
		if(minimum%2==0)
			printf("Mom\n");
		else
		    printf("Chef\n");
		
		
	}
}
