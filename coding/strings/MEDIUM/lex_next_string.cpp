#include <iostream>
#include<string>
using namespace std ;
string san(string &s)
{
  int n=s.length();
  while(n>=0 &&s[i]=='z')
    i--;
  if(i==-1)
    return s+'a' ;
  s[i]++;
  s.erase(i+1);
  return s ;
}