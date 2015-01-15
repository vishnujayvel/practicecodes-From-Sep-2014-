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
bool isSubsequence(string s1,string s2){
    int len1=s1.length();
    int len2=s2.length();
    int i=0,j=0;
    while(i<len1&&j<len2){
		if(s1[i]==s2[j]){
			i++;
			j++;
		}
		else{
			i++;
		}
	}
    return(j==len2);
	
}
bool isAnagrams(string s1,string s2){
	char arr[26]={0};
	int len=s1.length();
	REP(i,len){
		arr[s1[i]-'a']++;
	}
	REP(i,len){
		arr[s2[i]-'a']--;
	}
	REP(i,26){
		if(arr[i]!=0)
		   return false;
	}
	return true;
}
   
int main(){
   string s,t;
   cin>>s>>t;
   int a=0,b=0;
   int len1=s.length();
   int len2=t.length();
   int flag=0;
   if(len2>len1){
	   flag=1;
   }
   else if(len2<len1){
	    a=1;
	    if(!isSubsequence(s,t)){
		  b=1;
	    }
	    map<char,int> m;
	    REP(i,len1)
	       m[s[i]]++;
	    REP(i,len2){
			if(m.find(t[i])==m.end()){
				flag=1;
				break;
			}
			else{
				if(m[t[i]]==0){
					flag=1;
					break;
				}
				else{
					m[t[i]]--;
				}
			}
				
		}
   }
   else{ if(isAnagrams(s,t)){
		  b=1;
	     }
	     else{
			 flag=1;
		 }
   }
   
   if(flag){
	   cout<<"need tree\n";
   }
   else if(a==1&&b==1){
	   cout<<"both\n";
   }
   else if(a==1){
	   cout<<"automaton\n";
   }
   else if(b==1){
	   cout<<"array\n";
   }
}
