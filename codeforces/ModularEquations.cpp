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
 int a,b;
int noOfDivisors(int n){
	int till=sqrt(n);
	int c=0;
	FOR(i,1,till+1){
		 if((n%i)==0){
			if(i>b)
			c++;
		    if((n/i)>b&&(n!=i*i))
		      c++;
		 }
	}
	//if(till*till==n&&till>b)
	  // c++;
    return c;
}

int main(){
 scanf("%d%d",&a,&b);
 int ans=0;
 if(a==b){
	 printf("infinity");
	 return 0;
 }
 else {
    printf("%d",noOfDivisors(a-b));
 }
 
}
