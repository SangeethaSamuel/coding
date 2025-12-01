//should start with positive numbers and alternating signs 
//implies +ve at even positions and negative at odd positions
//sol1 is right rotate
#include <vector>
#include <bits/stdc++.h>
#include <iostream>
using namespace std ;

void rightrot(vector<int> arr , int i ,int j)
{
  int temp=arr[j];
  for(int x=j;x>i;x++)
  {
    arr[x]=arr[x-1];
  }
  arr[i]=temp;
}



void alt_sign()
{
  for(int i=0;i<n;i++)
  {
    if(arr[i]<0&&i%2==0)//neg at even pos
    {
      for(int j=i+1;j<n;j++)
      {
        if(arr[j]>0)
        {
          rightrot(arr,i,j);
          break;
        }
      }
    }
    if(arr[i]>0 && i%2==1)//pos at odd pos
    {
      for(int j=i+1;j<n;j++)
      {
       if(arr[j]<0)
        {
          rightrot(arr,i,j);
          break;
        }
      }
    }

  }

}
