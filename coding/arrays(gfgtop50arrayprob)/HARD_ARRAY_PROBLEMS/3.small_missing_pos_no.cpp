void smallest(vector<int>&arr , int n)
{
 for(int i=0;i<n;i++)
 {
  while(arr[i]>=1 && arr[i]<=n && arr[i]!=arr[arr[i]-1])
    swap(arr[i],arr[arr[i]-1]);
 }
 for(int i=1;i<n;i++)
 {
  if(i!=arr[i-1])
    return i ;
 }
 return n+1;
}

//using visied array
for(int i=0;i<n;i++)
{
  if(arr[i]>=1 && arr[i]<n)
    vis[arr[i]-1]=1
}
for i from 1 to n :
if(vis[arr[i]]!1)
  return i ;
return n+ 1;