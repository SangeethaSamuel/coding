void function_name()
{
  sort(arr.begin(),arr.end());
  for(int i=0;i<n&&arr[i]<res;i++)
  {
    res+=arr[i];
  }
  return res ;
}
//using dynamic programming
for(int i=0;i<n;i++)
  sum+=arr[i];
vector<bool> dp(sum+1 , false);
dp[0]=true ;
for(int i=0;i<n;i++)
{
  for(int j=sum-arr[i];j>=0;j--)
  {
    if(dp[j])
      dp[j+arr[i]]=1;
  }
}
for(int i=0;i<dp.size();i++)
{
  if(!dp[i])
    return i;
}