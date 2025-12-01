void subprod(vector<int>arr , int n )
{
  int p=1;
  for(int start=0,end=0;end<n;end++)
  {
    p*=arr[end];
    while(p>k &&start<end)
    {
      p=p/arr[start++];
    }
    if(p<k)
    {
      int len=end-start+1;
      res+=len ;
    }
  }
  return res ;
}