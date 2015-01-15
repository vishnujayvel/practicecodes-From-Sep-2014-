#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
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
#include <string>
#include <cstring>
#include <cctype>
#include <assert.h>

using namespace std;
typedef long long ll;

const double PI=acos(-1.0);
const double eps=1e-11;

#define dump(x) cerr<<#x<<" = "<<(x)<<endl;
#define foreach(c,itr) for (__typeof( (c).begin() ) itr=(c).begin();itr!=(c).end() ;itr++ )


int countbit(int n) {return (n==0)?0:1+countbit(n&(n-1));}
int lowbit(int n) {return n&(n^(n-1));}
string toString(ll v) { ostringstream sout;sout<<v;return sout.str();}
string toString(int v) { ostringstream sout;sout<<v;return sout.str();}
int Rand16(){return rand();}
int Rand32(){return rand()*rand();}
double DRand(){return (double)rand()/RAND_MAX;}
int RandRange(int f,int r){return f+(int)(DRand()*(r-f)+0.5);}


const int MAX=5000+50;
const ll INF =1LL<<50;

int n;
int A[MAX],B[MAX];
ll dp[2][MAX];

int main()
{
	int i,j;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		B[i]=A[i];
	}

	sort(B,B+n);
	int cur,pre;

	for (i=0;i<n;i++) dp[0][i]=abs(A[0]-B[i]);
	for (j=1;j<n;j++)
		dp[0][j]=min(dp[0][j-1],dp[0][j]);
	cur=0;

	for (i=1;i<n;i++)
	{
		pre=cur;
		cur=1-cur;
		cout<<"cur "<<cur<<" pre"<<" "<<pre<<endl;
		for (j=0;j<n;j++) 
			dp[cur][j]=dp[pre][j]+abs(A[i]-B[j]);
		for (j=1;j<n;j++)
			dp[cur][j]=min(dp[cur][j-1],dp[cur][j]);		
		
		printf("i=%d\n",i);
		for (j=0;j<n;j++)
			printf("dp[%d][%d]=%d\n",i,j,dp[cur][j]);
		
	}

	ll ans=INF;
	for (i=0;i<n;i++) ans=min(ans,dp[cur][i]);
	cout<<ans<<endl;

	return 0;
}
