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
    int arr[3];
    REP(i,3)
       cin>>arr[i];
    int ans=arr[0]+arr[1]+arr[2];
    ans=max(ans,arr[0]*(arr[1]+arr[2]));
    ans=max(ans,(arr[0]+arr[1])*arr[2]);
    ans=max(ans,arr[0]*arr[1]*arr[2]);
    cout<<ans;
}
