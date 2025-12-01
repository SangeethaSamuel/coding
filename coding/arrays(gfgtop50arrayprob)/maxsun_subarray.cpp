#include <stdio.h>
#include <bits/stdc++.h>
#include<vector>
vector<int> maxsubarray(vector<int> sub , int n)
{
  int res= arr[0];
  int maxh=arr[0];
  for(int i=1;i<n;i++)
  {
    maxh=max(maxh+arr[i],arr[i]);
    res=max(res,max);
  }
  return res ;
}