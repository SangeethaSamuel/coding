void max_indele()
{
  for(int i=0;i<n;i++)
  {
    currSum+=arr[i];
  }
  for(int i=0;i<n;i++)
  {
    currVal=currVal+ i*arr[i];
  }
  int res=currVal
  for(int i=1;i<n;i++)
  {
   
    nextVal=currVal-currSum-arr[i-1]+arr[i-1]*(n-1);
    currVal=nextVal;
    res=max(res,currVal);

  }
  return res ;
}