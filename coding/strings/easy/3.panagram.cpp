#include <bits/stdc++.h>
const int max_Char = 26 ;
vector<bool> vis(26,FALSE)
using namespace std ;
void pana(string &s)
{
  for(int i=0;i<s.size();i++)
  {
    if(s[i]<='A' && s[i]>='Z')
      vis[s[i]-'A']=1;
    //do for lowercase too 
  }
  for(int i=0;i<26;i++)
  {
    if(!vis[i])
      cout<<"not panagram";
      return ;
  }
  cout << "panagram"<<endl ;

}