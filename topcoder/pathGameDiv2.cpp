#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
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
using namespace std;


class PathGameDiv2 {
public:
	int calc(vector <string> board) {
		int len=board[0].length();
		int dist[2][len+1];
		queue<pair<int,int> >q;
		memset(dist,1000,sizeof dist);
		for(int i=0;i<2;i++){
		     if(board[i][0]=='.'){
		         dist[i][0]=1;
		         q.push(make_pair(i,0));
		      }
		}
		while(!q.empty()){
		
		   pair<int,int> p=q.front();
		   q.pop();
		   cout<<p.second<<endl;
		   if(p.second+1<len&&board[p.first][p.second+1]=='.'&&dist[p.first][p.second]+1<dist[p.first][p.second+1]){
		       dist[p.first][p.second+1]=dist[p.first][p.second]+1;
		       q.push(make_pair(p.first,p.second+1));
		   }
		   if(board[1-p.first][p.second]=='.'&&dist[p.first][p.second]+1<dist[1-p.first][p.second]){
		       dist[1-p.first][p.second]=dist[p.first][p.second]+1;
		       q.push(make_pair(1-p.first,p.second));
		   }
	   }
	   int minDist=min(dist[0][len-1],dist[1][len-1]);
       cout<<"minDist "<<minDist;
       int c=0;
       for(int i=0;i<2;i++){
          for(int j=0;j<len;j++){
              if(board[i][j]=='.')
                  c++;
             }
       }
       return c-minDist;
       	   
		   
		      
		         
		         
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
