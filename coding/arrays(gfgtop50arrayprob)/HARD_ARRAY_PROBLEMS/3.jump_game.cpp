void jump()
{
  vector<int> dp(n,INT_MAX);
  dp[n-1]=0;
  for(int i=n-2;i>=0;i--)
  {
    for(int j=i+1;j<n && j<i+arr[i];j++)
    {
      if(dp[j]!=INT_MAX)
      dp[i]=min(dp[i],dp[j]+1);
    }
  }
}