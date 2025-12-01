#include <iostream>
using namespace std ;
string camelCase(string &s)
{
  string res=""; 
  int n=s.size();
  bool x= false ;
  for(int i=0;i<n;i++)
  {
    if(s[i]==' ')
      x=true;
    else if(x==true)
      res+= toUpper(s[i]);
    else
      res+=s[i];
  }
  return res ;


}