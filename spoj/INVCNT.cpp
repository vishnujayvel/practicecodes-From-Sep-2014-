#include<iostream>
using namespace std;

long long int merge( long long int arr[], long long int temp[], long long int l, long long int mid, long long int r){
    long long int i=l,j=mid,k=l,invercount = 0;
    while( i<=mid-1 && j<=r){
        if( arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else{
            temp[k++] = arr[j++];
            invercount += mid-i;
        }
    }
    while( i <= mid-1)
        temp[k++] = arr[i++];
    while( j<=r)
        temp[k++] = arr[j++];
    for( i=l; i<=r; i++)
        arr[i] = temp[i];
    return invercount;
}

long long int msort( long long int arr[], long long int temp[], long long int l, long long int r){
    long long int mid, invercount=0;
    if( r >l){
        mid = (l+r)/2;
        invercount = msort(arr,temp,l,mid);
        invercount += msort(arr,temp,mid+1,r);
        invercount += merge(arr,temp,l,mid+1,r);
    }
    return invercount;
}

long long int merge1(long long int arr[], long long int temp[], long long int n){
    return msort(arr,temp,0, n-1);
}


int main(){
    long long int t;
    cin>>t;
    while( t--){
    long long int i, j,n;
    cin>>n;
    long long int arr[n],temp[n];
    for( i=0; i<n; i++)
        cin>>arr[i];
    long long int count = merge1(arr,temp,n);
    cout<<count<<endl;
    }
    return 0;
}

