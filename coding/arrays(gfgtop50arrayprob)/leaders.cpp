//rightmost element is always a leader !!
vector<int> leaders(vector<int> arr){
  int n= arr.size();
  int max_Right=arr[n-1];
  vector<int> res(n);
  res.pushback(max_Right);
  for(int i=n-2;i>0;i--)
  {
    if(arr[i]>max_Right)
    {
      max_Right=arr[i];
      res.pushback(arr[i]);
    }
  }
  res.reverse(res.begin(),res.end());
}