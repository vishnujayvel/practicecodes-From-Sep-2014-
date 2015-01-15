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
    int n,k;
    int arr[1005];
    scanf("%d%d",&n,&k);
    REP(i,n)
       scanf("%d",&arr[i]);
    int currentMax=arr[0],currentMin=arr[0];
    int maxP=0,minP=0;
    vector<pair<int,int> >ans;
    int c=0;
    while(1){
		currentMax=arr[0],currentMin=arr[0];
		maxP=0,minP=0;
		REP(j,n){
			if(currentMax<arr[j]){
				currentMax=arr[j];
				maxP=j;
			}
			if(currentMin>arr[j]){
				currentMin=arr[j];
				minP=j;
			}
		}
			if((currentMax-currentMin)<=1||k==0){
		//	   cout<<currentMax<<" - "<<currentMin<<" "<<k<<endl;
			    break;
			}
			else{
				c++;
				
				ans.pb(mp(maxP,minP));
				arr[maxP]--;
				arr[minP]++;
				k--;
			}
		}

	printf("%d %d\n",currentMax-currentMin,c);
	int len=ans.size();
	REP(i,len){
		pair<int,int> p=ans[i];
		printf("%d %d\n",p.first+1,p.second+1);
	}
}
			
       
    
