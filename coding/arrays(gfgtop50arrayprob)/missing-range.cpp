vector <vector<int>> res;

if(lower<arr[i])
    res.pushback({lower,arr[0]-1})
if(upper>n)
    res.pushback({arr[n-1]+1,upper})
for(int i=0;i<n;i++)
{
  if(abs(arr[i]-arr[i+1])>1)
  {
    res.pushback({arr[i]+1,arr[i+1]-1})
  }
  

}