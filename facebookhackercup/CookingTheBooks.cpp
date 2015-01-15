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

int t,minIndex,maxIndex,min1,max1,digit;
string n;
string swap(int i,int j){
	string temp=n;
	char t=temp[i];
	temp[i]=temp[j];
	temp[j]=t;
	return temp;
}
int main(){
	scanf("%d",&t);
	FOR(tcase,1,t+1){
		cin>>n;
		min1=999999999;
		max1=-1;
		int len=n.size();
		REP(i,len){
			digit=n[i]-'0';
			if(digit!=0){
				if(digit>=max1){
					max1=digit;
					maxIndex=i;
				}
				if(digit<=min1){
					min1=digit;
					minIndex=i;
				}
			}
		}
		string maxNum,minNum;
		int i=0;
		while(i<len&&n[i]==n[maxIndex]){
			i++;
		}
		if(i==len||n[i]>n[maxIndex])
		i=0;
		maxNum=swap(i,maxIndex);
		i=0;
		while(i<len&&n[i]==n[minIndex]){
			i++;
		}
		
		if(i==len||n[i]<n[minIndex])
		i=0;
		minNum=swap(i,minIndex);	
		cout<<"Case #"<<tcase<<": "<<minNum<<" "<<maxNum<<endl;
	}
}
