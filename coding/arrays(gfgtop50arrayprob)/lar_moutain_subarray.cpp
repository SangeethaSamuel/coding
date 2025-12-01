void mountain_subarray()
{
  int ans = 0 ;
  for(int i=1;i<n;i++)
  {
    if(arr[i]>arr[i-1]&& arr[i]>arr[i+1])
    {
      int count =0;
      int j=i;
      while(arr[j]>arr[j-1] && j>0)
      {
        count ++;j--;
      }
      while(arr[i]>arr[i+1]&& i<=n-2)
      {
        i++;count ++;
      }
      ans=max(ans,count)

    }
    else
      i++;
  }
  
}