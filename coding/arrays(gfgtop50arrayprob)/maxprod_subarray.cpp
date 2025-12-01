void maxprod(vector<int> arr , int n)
{
  int maxp=arr[0];
  int minp=arr[0];
  int temp ;
  for(int i=1;i<n;i++)
  {
    temp=max(arr[i],arr[i]*maxp,arr[i]*minp);
    minp=min(arr[i],arr[i]*maxp,arr[i]*minp);
    maxp=temp;
  }
}

//method2
void maxProd(vector<int> arr , int n)
{
  int lr=1;
  int rl=1;
  int j;
  int maxP=INT_MIN ;
  for(int i=0;i<n;i++)
  {
    j=n-1-i;
    if (lr==0)
      lr=1;
    if(rl==0)
      rl=1
    lr*=arr[i];
    rl*=arr[j];
    maxP=max(maxP,lr,rl);
  }
}