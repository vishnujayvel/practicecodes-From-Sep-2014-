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
vector<ll> arr;
vector<ll> temp;
int main(){
	int t,n,k,flag;
	ll sum,x;
	scanf("%d",&t);
	while(t--){
		flag=0;
		scanf("%d%d",&n,&k);
		sum=0;
		REP(i,n){
			scanf("%lld",&x);
			arr.pb(x);
			sum+=x;
		}
		if(sum!=0&&sum%k==0){
			ll s=sum/k;
		    unsigned long long setSize = pow(2, n);
            
 
       for(int j = 0; j < setSize; j++){
           ll setSum=0;
           temp.clear();
           for(int l = 0; l < setSize; l++){
               if(j & (1<<l)){
			//	   cout<<arr[l]<<" ";
                   setSum+=arr[l];
                   temp.pb(arr[l]);
			   }
			}
			//cout<<"sum= "<<setSum<<endl;
			if(setSum==s){
				// cout<<"Before "<<endl;
				 
				  //REP(i,arr.size())
                    //cout<<arr[i]<<" ";
                  //cout<<endl;
				   REP(p,temp.size())
                            arr.erase(remove(arr.begin(), arr.end(), arr[p]), arr.end());
				 
				 //cout<<"After "<<endl;
				 /*REP(i,arr.size())
                    cout<<arr[i]<<" ";
                  cout<<endl;
				 */
		         j=0;
		         setSize=pow(2,arr.size());
		    }
		   
       }
     /*  cout<<"array size "<<arr.size()<<endl;
       REP(i,arr.size())
       cout<<arr[i]<<" ";
       cout<<endl;
       */         if(arr.size()!=0)
		        flag=1;
			}
		
		else{
		   flag=1;
	   }
	   if(flag==0)
		      printf("yes\n");
		    else
		     printf("no\n");
		   
	   }
   }
				
					
