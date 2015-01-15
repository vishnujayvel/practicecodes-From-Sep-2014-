#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
#include<vector>
using namespace std;
int solve(string str){
	char arr[26]={0};
	int len=str.length();
	for(int i=0;i<len;i++){
		arr[str[i]-'a']++;
	}
	int singleFreqChar=0;
	int multiFreqChar=0;
	int multiFreqCharPopulation=0;
	int visited[26]={0};
	for(int i=0;i<len;i++){
		if(visited[str[i]-'a']==0){
		if(arr[str[i]-'a']==1){
		   singleFreqChar++;
		 //  cout<<char(i+'a')<<" ";
	   }
	   else{
	      multiFreqChar++;
	      multiFreqCharPopulation+=arr[str[i]-'a'];
	   }
	   visited[str[i]-'a']=1;
   }
	 }
	sort(arr,arr+26);
	int changes=0;
	int ans=INT_MAX;
	vector<int> v;
	for(int i=1;i<=len;i++){
		if(len%i==0){
			int possiblePartitionSize=len/i;
			changes=0;
			int temp=0;
			for(int j=0;j<26;j++)
			     v.push_back(abs(possiblePartitionSize-arr[j]));
			sort(v.begin(),v.end());
			for(int j=0;j<i;j++)
			temp+=v[j];
			ans=min(ans,temp);
		}
	}
	//cout<<multiFreqCharPopulation<<" - "<<multiFreqChar<<"***"<<endl;
	ans=min(ans,multiFreqCharPopulation-multiFreqChar);
	//cout<<len<"sfsf";
	return ans;
	
}
int main(){
	int t;
	cin>>t;
	string str;
	while(t--){
		cin>>str;
		cout<<solve(str)<<endl;
	}
}
	    
