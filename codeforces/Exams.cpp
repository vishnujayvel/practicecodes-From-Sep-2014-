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
    int n,a,b;
    vector<pair<int,int> >date;
    scanf("%d",&n);
    REP(i,n){
		scanf("%d%d",&a,&b);
		date.pb(mp(a,b));
	
	}
	sort(date.begin(),date.end());
	int currentExam=-1;
	REP(i,n){
        if(currentExam<=date[i].second){
		    currentExam=date[i].second;
		  }
		  else{
			  currentExam=date[i].first;
		  }
	}
    cout<<currentExam;
	
	
	}
