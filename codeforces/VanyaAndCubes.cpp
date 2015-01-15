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
    map<int,int> m;
    m[1]=1;
    FOR(i,2,100){
		m[i]=m[i-1]+((i*(i+1))/2);
	}
	cin>>n;
	int l=0,r=100;
	int mid;
	while(l<=r){
		//cout<<l<<" "<<r;
		 mid=(r-l)/2+l;
		 //cout<<" "<<mid<<endl;
		
		if(m[mid]==n){
			cout<<mid;
			return 0;
		}
		else if(m[mid]<n){
			l=mid+1;
		}
		else
		   r=mid-1;
    }
    cout<<r;
}
		
		
