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
	int a1,a2,a3,b1,b2,b3,n;
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
	int asum=a1+a2+a3;
	int bsum=b1+b2+b3;
	int need=(int)ceil((double)asum/(double)5)+(int)ceil((double)bsum/(double)10);
	//cout<<"need is "<<(int)ceil((double)asum/(double)5)<<" + "<<(int)ceil((double)bsum/(double)10);
	if(need<=n)
	   cout<<"YES";
	else 
	   cout<<"NO";
   }
   
