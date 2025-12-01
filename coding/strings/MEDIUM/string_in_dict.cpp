bool str_recur(int i)
{
  if(i==s.size())
    return true ;
  int n=s.length();
  string prefix="";
  for(int j=i;j<n;j++)
  {
    prefix+=s[j];
    if(find(dict.begin(),dict.end(),prefix)!=dict.end() && str_recur(i+1))
      return true ;
  }
}