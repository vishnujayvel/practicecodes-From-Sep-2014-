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
	vector<int>one,two,three;
	int n,x;
	cin>>n;
	REP(i,n){
		cin>>x;
		if(x==1)
		   one.pb(i+1);
		else if(x==2)
		   two.pb(i+1);
		else
		   three.pb(i+1);
    }
    int min1=min(one.size(),two.size());
    min1=min(min1,(int)three.size());
    cout<<min1<<endl;
    REP(j,min1){
		cout<<one[j]<<" "<<two[j]<<" "<<three[j]<<endl;
	}
}
