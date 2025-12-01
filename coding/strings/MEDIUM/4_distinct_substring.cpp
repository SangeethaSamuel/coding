bool check(string &s)
{
  int n=s.size();
  string s1,s2,s3,s4 ;
  for(int i=1;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      for(int k=j+1;k<n;k++)
      {
        s1=s.substr(0,i);
        s2=s.substr(i,j-i);
        s3=s.substr(j,k-j);
        s4=s.substr(k,n-k);
        if(s1!=s2 or s3 or s4 and s2 != s3 and s4 and s3!=s4)
          return true ;
        
      }
    }
  }
}