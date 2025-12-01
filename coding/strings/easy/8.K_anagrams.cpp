//strings have same no of characters and changing k chars give same string
bool (string &a, string &b)
{
  if(a.length()!=b.length())
    return false ;
  vector<int> freq(26,0);
  for(int i=0;i<a.length();i++)
  {
    freq[a[i]-'a']++;


  }
  for(int i=0;i<b.length();i++)
  {
    if(freq[b[i]-'a'] > 0)
      frew[b[i]-'a']--;
    else 
      count++;
    if(count > k)
      return false ;
    
  }
  return true ;
}