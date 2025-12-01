#include <vector>
#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std ;
void max_distance_unoccupied_seat(string s){
  int ec=0;
  for(int i=0;i<s.size();i++)
  {
    if (s[i]=='0')
      ec++;
    else if(s[i]=='1' && res==-1)
    {
      res=ec ;
      ec=0;

    }
    else
    {
      res=max(res,static_cast<int>(ceil(ec/2)));
      ec=0;
    }
    
      
  }
  res=max(res,ec);
  return res ;

}