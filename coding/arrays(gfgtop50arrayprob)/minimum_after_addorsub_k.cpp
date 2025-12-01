#include <stdio.h>
#include <bitsstdc++.h>
#include <vector>
void compute(vector<int>arr, int n,int k)
{
  sort(arr.begin(),arr.end());
  int res=arr[n-1]-arr[0];
  int minh,maxh;
  for(int i=1;i<n;i++)
  {
    minh=min(arr[0]+k,arr[n-i]-k);
    maxh=max(arr[i-1]+k , arr[n-1]-k);
    
  }
  res=min(res,maxh-minh);
}