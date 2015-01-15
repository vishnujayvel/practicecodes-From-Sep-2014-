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
void combinationUtil(int arr[], int n, int r, int count, int data[], int i);
 
int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
 
void printCombination(int arr[], int n, int r)
{   
	int data[r];

    sort(arr,arr+n);
    combinationUtil(arr, n, r, 0, data, 0);
}
 
void combinationUtil(int arr[], int n, int r, int index, int data[], int i)
{
    if (index == r)
    {
        for (int j=0; j<r; j++)
            printf("%d ",data[j]);
        printf("\n");
        return;
    }
 
    if (i >= n)
        return;
 
    data[index] = arr[i];
    combinationUtil(arr, n, r, index+1, data, i+1);
    
    while (arr[i] == arr[i+1])
        i++;
 
    combinationUtil(arr, n, r, index, data, i+1);
}
 
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int r = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    printCombination(arr, n, r);
    return 0;
}
