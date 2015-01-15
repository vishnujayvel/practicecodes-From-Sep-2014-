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
	int a,b,n;
	ll a1=0,b1=0;
	vector<int>sa,sb;
	scanf("%d",&a);
	REP(i,a){
	   scanf("%d",&n);
	   sa.pb(n);
   }
   scanf("%d",&b);
   REP(i,b){
	   scanf("%d",&n);
	   sb.pb(n);
   }
   int len1=sa.size();
   int len2=sb.size();
   int d;
   sort(sa.begin(),sa.end());
   sort(sb.begin(),sb.end());
   ll diff=-9999999999;
   ll finala1,finalb1,finald;
   if(len1!=len2){
	   d=sa[0]-1;
	   a1=(ll)len1*3;
	   b1=0;
	   for(int i=b-1;i>=0;i--){
		   if(sb[i]>d)
		      b1+=(ll)3;
		    else{
			  b1+=(ll)((i+1)*2);
		      break;
	       }
      }
  }
    else{
		for(int i=a-1;i>=0;i--){
			d=sa[i]-1; 
	        a1=(ll)(a-i)*3+(ll)i*2;
	        b1=0;
	        for(int j=b-1;j>=0;j--){
		   if(sb[j]>d)
		      b1+=(ll)3;
		    else{
		      b1+=(ll)((j+1)*2);
		      break;
		    }
		      
	     }
	  cout<<a1<<" "<<b1<<" "<<d<<endl;
	     if(((a1-b1)>diff)||((a1-b1)==diff&&a1>finala1)){
		          diff=a1-b1;
		          finala1=a1;
		          finalb1=b1;
		          finald=d;
			  }
	
	   }
	   a1=finala1;
	   b1=finalb1;
	 //cout<<"d "<<finald<<endl;
   }
   cout<<a1<<":"<<b1;
}
