bool iso()
{
  vector<int> map(26,-1) ;
  vector<int> marked(26,0);
  for(int i=0;i<n;i++)
  {
    int x=a[i]-'a' ;
    int y=b[i]-'a';
    if(map[x]==-1)
    {
      if(marked[y])
        return false ;
      map[x]=y;
      marked[y]=1;
    }
    else if(!(map[x]==y))
    {
      return false ;
    }
  }
  return true ;
}
