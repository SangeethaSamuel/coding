void eq (vector<int> arr , int n)
{
  int sum =0 ;
  int minval=*min_element(arr.begin(),arr.end());
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
  }
  return sum-n*minval;

}