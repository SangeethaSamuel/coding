//S1
#include <vector>
#include<iostream>
#include <bits/stdc++.h>
void max_trip(vector<int> arr )
{
  int n =arr.size();
  int maxP=-1e15;
  for(int i=0;i<n-2;i++)
  {
    for(int j=i;j<n-1;j++)
    {
      for(int k=j;k<n;k++)
      {
        maxP=max(maxP,arr[i]*arr[j]*arr[k]);
      }
    }
  }

}

//S2
void max_trip(vector <int> arr ){
  int m1=INT_MAX,m2=INT_MAX,m3=INT_MAX;
  int m4=INT_MAX,m5=INT_MAX ;
  for(int i=0;i<sizeof(arr);i++){
    int x=arr[i];
    if(x>m1)
    {
      m1=x;
      m2=m1;
      m3=m2;
        }
    else if(x>m2){
      m2=x;
      m3=m2;
    }
    else if(x>m3)
    {
      m3=x;
    }
    if(x<m4)
    {
      m4=x;
      m5=m4;
    }
    else if(x<m5) 
    {
      m5=x;

    }
  }
  return max(m4*m5*m1,m1*m2*m3);
}
