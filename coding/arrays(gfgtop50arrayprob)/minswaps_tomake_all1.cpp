int min_swaps(vector<int> &arr)
{
  int n=arr.size();
  int count = 0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==1)
    {
      count++;
    }
  }
  int wc=0;
  for(int i=0;i<count;i++)
  {
    if(arr[i]==1)
      wc++;
  }
  int maxones=wc ;//currentlt no of ones in the subarray is the maximum
  for(int i=1;i<=n-x;i++)
  {
    if(arr[i-1]==1)
    {
      wc--;
    }
    if(arr[i+x-1]==1)
      wc++;
    if(maxones<wc)
      maxones=wc;
  }
  int n_z=count -maxones;
  return n_z;

  
}