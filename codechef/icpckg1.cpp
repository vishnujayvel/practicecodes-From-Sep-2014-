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
typedef long long int ll;
map<string, vector<string> > table;

bool solve(string src,string dst){
    cout<<src<<" "<<dst<<endl;
    int i=0;
    if(dst.length()==0&&src.length()==0)
        return 1;
    if(dst.length()==0||src.length()==0)
        return 0;
    while(i<src.length() && src[i]==dst[i]){
        i++;
    }
    if( i == src.length() )
        return 1;
    int len=src.length();
    if( i != 0 ){
        src = src.substr(i);
        dst = dst.substr(i);
    }
    map<string, vector<string> > ::iterator it;
    
    for(int i=1;i<=len;i++){
        string candidate=src.substr(0,i);
        if(table.find(candidate)!=table.end()){
            vector<string> list=table[candidate];
            for(int j=0;j<list.size();j++){
                
                string temp=list[j];
                int k=0;
                while(temp[k]==dst[k]&&k<temp.size()){
                    k++;
                }
                if(k==temp.size()&&solve(src.substr(candidate.size()),dst.substr(k)))
                    return 1;
                else{
					
					
				}
					
                     
            }
        }
    }
    return 0;
    
    
}	


int main(){
    int p;
    string s,b;
    scanf("%d", &p);
    while( p-- ){
		table.clear();
        int flag = 0;
        cin>>s>>b;
        int maps;
        scanf("%d", &maps);
        cin.ignore(1000,'\n');
        string src, dst;
        //string src,dst;
        while( maps-- ){
            cin>>src;
            int index = src.find("-");
            dst = src.substr(index+2);
            src = src.substr(0,index);
//            cout<<"S  "<<src<<" D "<<dst<<endl;
            cin.ignore(1000,'\n');
            //           int k, len1 = strlen(dst);
            //         for( k=0; k<len1; k++ )
            table[src].push_back(dst);
        }
        int i, len = s.length();
        
        if( !solve(s,b) )
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
