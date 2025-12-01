#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
void inter(vector<int> a ,vector<int> b)
{
  int i=a.size() , j=b.size();
  int x= 0,y=0;
  int l,r
  while(x<i && y<j)
  {
    l=max(a[x][0],b[y][0]);
    r=min(a[x][1],b[y][1]);
    if(l<r)
      cout <<"["<<l<<","<<r<<"]" ;
    if(arr[x][1]<arr[y][1])
      x++;
    else
      y++;

    
  }
}