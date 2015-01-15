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
	int q;
	string newStr,oldStr;
	map<string,string>wordmap,usedmap;
	//consider that each word(handle) goes via chain transition. initialhandle->changeinhandle->againchangeinhandle->....->finalhandle
	//usedmap will keep track of all currenthandle and its immediate parenthandle
	//wordmap will keep track of initial and final handle of a contestant
	scanf("%d",&q);
	while(q--){
		cin>>oldStr>>newStr;
		if(usedmap.find(oldStr)==usedmap.end()){
			usedmap[oldStr]=oldStr;
			usedmap[newStr]=oldStr;
			wordmap[oldStr]=newStr;
		}
		else{
			usedmap[newStr]=usedmap[oldStr];
			wordmap[usedmap[oldStr]]=newStr;
		}
	}
	cout<<wordmap.size()<<endl;
	for(map<string,string>::iterator it=wordmap.begin();it!=wordmap.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
}
	
	  	
