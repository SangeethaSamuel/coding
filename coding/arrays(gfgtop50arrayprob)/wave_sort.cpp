void wave(vector<int> arr){
  int n=arr.size();
  for(int i=0;i<n;i+=2){
    swap(arr[i],arr[i+1]);
  }
}