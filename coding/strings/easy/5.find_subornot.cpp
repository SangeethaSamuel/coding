//inbuiltfunction
/*
  size_t idx=string1.find(string2)
  if(idx==std::npos) return -1
  else return idx 
*/

#include <bits/stdc++.h>
using namespace std ;
int sub_pos(string &s1,string& s2)
{
  int a=s1.size();
  int b=s2.size();
  for(int i=0;i<a-b;i++)
  {
    int j ;
    for(j=i;j<b;j++)
    {
      if(s1[i+j]!=s2[j])
        break;
    }
    if(j==b)
      return i ;
  }
}