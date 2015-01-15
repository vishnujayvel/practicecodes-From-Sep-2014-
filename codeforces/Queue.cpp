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
    map<int,int> beforecount,aftercount;
    map<int,int> id;
    int arr[200005];
    int n,a,b,start,end,second_start,second_end;
    scanf("%d",&n);
    REP(i,n){
        scanf("%d%d",&a,&b);
        beforecount[a]++;
        beforecount[b]--;
        aftercount[b]++;
        aftercount[a]--;
        id[a]=b;
        if(a==0)
          second_start=b;
        if(b==0)
           second_end=a;
        
    }
    map<int,int>::iterator it;
    for(it=beforecount.begin();it!=beforecount.end();it++){
        if(it->second==1){
            start=it->first;
            break;
        }
        
    }
    for(it=aftercount.begin();it!=aftercount.end();it++){
        if(it->second==1){
            end=it->first;
            break;
        }
        
    }
    //cout<<start<<" "<<second_start<<" "<<second_end<<" "<<end;
    arr[0]=start;
    arr[1]=second_start;
    arr[n-1]=end;
    arr[n-2]=second_end;
    for(int i=0;i<n;i++){
        int before=arr[i];
            if(i+2<n){
                arr[i+2]=id[before];
                //break;
            }
        
    }
    REP(i,n)
      cout<<arr[i]<<" ";
    
    
}
