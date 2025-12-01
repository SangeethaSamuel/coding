void makeSUm()
{
  for(int i=0;i<n;i++)
  {
    int idx=0,es=0,os=0;
    for(int j=0;j,n;j++)
    {
      if(j==i)
        continue ;
      if(idx%2==0)
        es+=arr[j];
      else
        os+=arr[j];
      idx++;
    }
    if(es==os)
      res++;
    return res ; 

    
  }
}

//sol2
for(int i=0;i<n;i++)
{
  if(i%2==0)
  {
    oe+=arr[i];
    continue ;
  }
  oo+=arr[i];
  

}
int no=0,ne=0;
for(int i=0;i<n;i++)
{
  if(i%2==0)
    oe-=arr[i];
    
  else
    oo-=arr[i];
   // no+=arr[i];
  if(oe+no==oo+ne)
    res++;

  if(i%2==0)
    ne+=arr[i];
  else
    no+=arr[i];
  return res ;
  
}