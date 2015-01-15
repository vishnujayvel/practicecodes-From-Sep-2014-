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
int countSetBits(unsigned int n)
{
  unsigned int count = 0;
  while(n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}
 
/* Program to test function countSetBits */
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int plus=0,minus=0;
    int p1=0,m1=0;
    int len=str1.size();
    int ques=0;
    REP(i,len){
       if(str1[i]=='+')
          plus++;
       else
          minus++;
       if(str2[i]=='+')
           p1++;
       else if(str2[i]=='-')
           m1++;
       else
          ques++;
   }
   int digit=ques;
   unsigned int limit=pow(2,digit);
   int yes=0,no=0;
   for(unsigned i=0;i<limit;i++){
	   int set=countSetBits(i);
	   if(p1+set==plus)
	       yes++;
	   else
	       no++;
  }
  float ans=(float)yes/(float)(yes+no);
  printf("%.12f\n",ans);
}
  
	   
   
   
   
    
   
