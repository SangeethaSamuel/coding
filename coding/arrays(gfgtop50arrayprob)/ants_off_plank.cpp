#include <vector>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std ;
int com(  vector<int>&left,vector<int.&right,int n)
{
  int res=0;
  for(int i=0;i<left.size();i++)
  {
    res=max(res,left[i]);
  }
  for(itn i=0;i<right.size();i++)
  {
    res=max(res,n-right[i]);
  }
  return res ;

}