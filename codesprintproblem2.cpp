#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string lexicographicallyLargest(string str){
	string max=str;
	string::iterator it;
	string temp;
	for(it=str.begin();it!=str.end();it++){
	    it=max_element(it,str.end());
	    if(it==str.end())
	       break;
	    temp="";
	    temp=string(it,str.end());
	    
	    temp+=string(str.begin(),it);
	    //temp.assign(it,str.end()).append(str.begin(),it);
	   // cout<<temp;
	    if(temp>max)
	       max=temp;
	    
	    
	}
	return max;
}
int main(){
  cout<<lexicographicallyLargest("abaa");
}
