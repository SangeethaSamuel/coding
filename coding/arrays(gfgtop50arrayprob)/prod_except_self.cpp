vector<int> prod_ex_self(vector<int> arr)
{
  int z=0 ;
  int idx ,prod=1;
  vector<int> res(arr.size(),0);
  for(int i=0;i<n;i++)
  {
    if(arr[i]==0)
    {
      z++;
      idx=1 ;
      continue ;
    }
    prod*=arr[i];
    
  }
  
    if(z==0)
    {
      for(int i=0;i<n;i++)
        res[i]=prod/arr[i];
      
    }
    else
    {
      res[idx]=prod ;
    }
  
}