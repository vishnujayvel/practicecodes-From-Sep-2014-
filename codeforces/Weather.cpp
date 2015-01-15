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
	int arr[100005];
	int negative[100005],positive[100000];
	FILE *f1,*f2;
	int n;
	f1=fopen("input.txt","r");
	f2=fopen("output.txt","w");
	fscanf(f1,"%d",&n);
	REP(i,n){
		fscanf(f1,"%d",&arr[i]);
	}
	positive[0]=(arr[0]>=0)?1:0;
	negative[n-1]=(arr[n-1]<=0)?1:0;
	FOR(i,1,n){
		positive[i]=positive[i-1]+((arr[i]>=0)?1:0);
	}
	for(int i=n-2;i>=0;i--){
		negative[i]=negative[i+1]+((arr[i]<=0)?1:0);
	}
	int ans=n;
	REP(i,n-1){
		ans=min(ans,positive[i]+negative[i+1]);
	}
	fprintf(f2,"%d\n",ans);
	fclose(f1);
	fclose(f2);
}
		
	
	
		
		
		
		
		
