//count number of even numbers
//count number of odd numbers
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
	int n,k,p,num,e,o;
	vector<int>even;
	vecor<int>odd;
	scanf("%d%d%d",&n,&k,&p);
	REP(i,n){
		scanf("%d",&num);
	    if(num%2==0){
			e++;
			even.pb(num);
		}
		else{
			o++;
			odd.pb(num);
		}
	}
	int flag=0;
	if(e<p&&o<(k-p)){
		flag=1;
	}
	else{
		
	}
