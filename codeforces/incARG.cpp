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
	string str;
	cin>>n>>str;
	char carry='1';
	string temp=str;
	int ans=0;
	REP(i,n){
	    if(carry=='1')
	       ans++;
	  //  cout<<str[i]<<" + "<<carry;
	    str[i]=(char)((str[i]-'0')+(carry-'0')+'0');
	    //cout<<" "<<str[i];
	    if(str[i]=='2'){
	       str[i]='0';
	       carry='1';
	     }
	     else{
			 carry='0';
		 }
		 
		 
    }
    cout<<ans;
}
	 
	   
	     
	
