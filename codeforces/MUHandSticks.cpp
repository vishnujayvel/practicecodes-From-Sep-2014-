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
  int x;
  map<int,int> m;
 
  REP(i,6){
   cin>>x;
   m[x]++;
  }
  map<int,int>::iterator it;
  int leg=0,a=-1,b=-1,same=0;
  for(it=m.begin();it!=m.end();it++){
	  if(it->second==6){
	       same=1;
	       break;
	   }
	   if(it->second==5){
		   leg=1;
		   if(a==-1)
	         a=it->first;
	      else
	         b=it->first;
		}
	   
	  else if(it->second==4){
	      leg=1;
	  }
	  else if(it->second==2){
		  
	      
	         a=it->first;
	     
	         b=it->first;
	  }
	  else{
		  if(a==-1)
		     a=it->first;
		   else
		     b=it->first;
		 }
  }
  if(same){
	  cout<<"Elephant";
  }
  
  else if(leg){
	  if(a==b)
	     cout<<"Elephant";
	  else
	     cout<<"Bear";
  }
  else
       cout<<"Alien";
 }
	
       
	  
  

 
