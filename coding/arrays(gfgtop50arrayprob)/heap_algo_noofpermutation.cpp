#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

void printarr(vector<int> arr , int n)
{
    for(int i=0;i<n;i++)
    {
      cout << arr[i]<<endl;
    }
}

void heapPer(vector<int> arr , int size , int n )
{
  if(size==1)
  {
    printarr(arr,n);
    return ;

  }
  for(int i=0;i<size;i++)
  {
    heapPer(arr,size-1,n);
    if(size%2==1)
      arr[0]=arr[size-1];
    else
      arr[i]=arr[size-1];

  }
}

void main()
{
  int n= arr.size();
  heapPer(arr,n,n);
}
