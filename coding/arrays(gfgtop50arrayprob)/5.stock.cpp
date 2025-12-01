void stock_ex(vector<int> arr ,int n){
  int n=arr.size();
  int i =0;
  int res=0;
  while(i<n-1)
  {
    while (i < n - 1 && prices[i] >= prices[i + 1]) { i++; }
        lMin = prices[i];
       
        // Local Maxima
        while (i < n - 1 && prices[i] <= prices[i + 1]) { i++; }
        lMax = prices[i];
    res=res+(lmax-lmin);
  }
  return res ;
}
 

//S2

