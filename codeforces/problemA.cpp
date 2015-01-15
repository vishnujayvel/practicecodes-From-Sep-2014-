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
#include <string>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
typedef long long int ll;
int main(){
 map<int,int> home,away;
 string str1,str2;
 cin>>str1>>str2;
 int n,t,num;
 string team,flag;
 cin>>n;
 vector<string> ans;
 char st[22],st1[22];
//int num = 3;
 REP(i,n){
	 cin>>t>>team>>num>>flag;
	 if(team=="h"){
	     if(flag=="y"){
			 home[num]++;
	     if(home[num]==2){
			 //cout<<home<<" "<<num<<" "<<t<<endl;
			 sprintf(st, "%d", num); 
             sprintf(st1, "%d", t); 
             string q(st);
             string q1(st1);
			 ans.pb(str1+" "+q+" "+q1);
			 home[num]=0;
		 }
	    }
	    else{
			//cout<<home<<" "<<num<<" "<<t<<endl;
			 sprintf(st, "%d", num); 
             sprintf(st1, "%d", t); 
            
             string q(st);
             string q1(st1);
		  ans.pb(str1+" "+q+" "+q1);
		 
		 }
	}
	else{
		    if(flag=="y"){
			 away[num]++;
	     if(away[num]==2){
			 //cout<<away<<" "<<num<<" "<<t<<endl;
		 	 sprintf(st, "%d", num); 
             sprintf(st1, "%d", t); 
            
             string q(st);
             string q1(st1);
		  ans.pb(str2+" "+q+" "+q1);
		  away[num]=0;
		
		 }
	    }
	    else{
			//cout<<away<<" "<<num<<" "<<t<<endl;
		 	 sprintf(st, "%d", num); 
             sprintf(st1, "%d", t); 
            
             string q(st);
             string q1(st1);
		  ans.pb(str2+" "+q+" "+q1);
		
		 }
	}
}
REP(i,ans.size())
   cout<<ans[i]<<endl;
}
			 
			 
	     
	 
 
