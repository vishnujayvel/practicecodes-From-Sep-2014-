
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


ll mSort(int arr[], int temp[], int left, int right)
{
   int mid;
   ll inversion_count = 0;
   if (right > left)
   {
       mid = (right + left)/2;
       
       inversion_count  = mSort(arr, temp, left, mid);
       inversion_count += mSort(arr, temp, mid+1, right);
       
       inversion_count += merge(arr, temp, left, mid+1, right);
   }
   return inversion_count;
}

ll mSort(int arr[], int array_size)
{
   int temp[array_size];
   return mSort(arr, temp, 0, array_size - 1);
}



ll merge(int arr[], int temp[], int left, int mid, int right)
{
   int i, j, k;
   ll inversion_count = 0;
   
   i = left;
   j = mid; 
   k = left;
   while ((i <= mid - 1) && (j <= right))
   {
       if (arr[i] <= arr[j])
       {
           temp[k++] = arr[i++];
       }
       else
       {
           temp[k++] = arr[j++];
           inversion_count = inversion_count + (mid - i);
       }
   }
   
   while (i <= mid - 1)
       temp[k++] = arr[i++];
   
   while (j <= right)
       temp[k++] = arr[j++];
   
   for (i=left; i <= right; i++)
       arr[i] = temp[i];
   
   return inversion_count;
}

int main()
{
   int t, n;
   ll k;
   scanf("%d", &t);
   while( t-- ){
       scanf("%d%lld", &n, &k);
       int i, arr[n];
       for( i=0; i<n; i++)
           scanf("%d", &arr[i]);
       ll inversions = mSort(arr, n);
       if( inversions <= k )
           printf("0\n");
       else
           printf("%lld\n", k-inversions);
   }
   return 0;
}
