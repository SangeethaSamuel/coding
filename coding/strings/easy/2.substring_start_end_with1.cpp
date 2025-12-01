#include <iostream>
using namespace std ;
string sub(string &s)
{
  int c=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='1')
    {
      c++;
    }
  }
  return c*(c-1)/2;
}