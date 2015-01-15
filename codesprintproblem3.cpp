#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int p;
int solve(int k,int pos){
	
	int ret;
	if(pos==p){
	//	cout<<"got it at "<<k<<" \n";
		return k;
	}
	
	if(k+pos<=p){
	   ret=solve(k+1,k+pos);
	   if(k+pos+1<=p)
	    ret=min(ret,solve(k+1,k+pos+1));
	    return ret;
	}
	else
	{
		//cout<<k<<" "<<pos<<" ? \n";
	return INT_MAX;
}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>p;
		cout<<min(solve(1,1),solve(1,1+1))<<endl;
	}
}
	
