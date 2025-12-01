#include <bits/stdc++.h>
vector<string> printpath(string&s)
{
  int n=s.size();
  vector<string> result ;
  char ch='A' ;
  unordered_map <char, pair<int,int>> pos ;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5 &&ch<='Y';j++,ch++)
    {
      pos[ch]={i,j};
    }
  }
  pos['Z']={5,0} ;
  for(char c :str)
  {
    int tx=pos[c].first ;
    int ty=pos[c].second ;
    while(y<ty)
    {
      result.pushback("RIGHT");
      y++ ;
    }
     while(y>ty)
    {
      result.pushback("LEFT");
      y-- ;
    }
     while(x<tx)
    {
      result.pushback("DOWN");
      x++ ;
    }
     while(x>tx)
    {
      result.pushback("UP");
      x-- ;
    }
    res.pushback("OKAY");
    
  }

}