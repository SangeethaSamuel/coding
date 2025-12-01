void triplepair(vector<int> arr ,int n)
{
  int p =0;
  int total=0;
  vector<int> res(arr.size());
  for(int i=0;i<n;i++)
  {
    total+=arr[i];
  }
  if(total%3!=0)
  {
    return {-1,1} ;
  }
  for(int i=0;i<n;i++){
    p+=arr[i];
    if(p==total/3)
    {
      p=0
      res.pushback(i);
      if(res.size()==2 && i<arr.size()-1)
      {
        return res ;
      }
    }
    
  }

}