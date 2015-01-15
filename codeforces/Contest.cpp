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
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	double m,v,Epsilon=0.001;
	m=max((3*a)/10,a-((a/250)*c));
	v=max((3*b)/10,b-((b/250)*d));
	if((m - v < Epsilon) && (fabs(m-v) > Epsilon))
	{
		printf("Vasya");
	}

	else if ((m - v > Epsilon) && (fabs(m-v) > Epsilon))
	{
		printf("Misha");
	}
	else{
		printf("Tie");
	}
}
