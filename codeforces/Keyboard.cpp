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
    vector<string> str;
    str.pb("qwertyuiop");
    str.pb("asdfghjkl;");
    str.pb("zxcvbnm,./");
    string data;
    char d;
    cin>>d>>data;
    int len=data.length();
    string ans="";
    REP(i,len){
		REP(j,3){
			REP(k,str[0].length()){
			if(str[j][k]==data[i]){
				if(d=='R')
				    ans+=str[j][k-1];
				else
				    ans+=str[j][k+1];
				}
			}
		}
	}
	cout<<ans;
}	
		
