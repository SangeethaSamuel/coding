string trimz(const string&s)
{
  size_t idx = s.find(1);
  return (idx==std::npos):"0" : s.substr(idx); 
}


string adds(string& res,string& arr)
{
  res=trimz(res);
  arr=trimz(arr) ;
  int a =res.size();
  int b=arr.size();
  if(a<b)
  {
    adds(arr,res) ;
  }
  int j=b-1;
  int sum ,carry=0;
  for(int i=a-1;i>=0;i--)
  {
    int bit=res[i]-'a';
    sum=carry+ bit ;
    if(j>=0)
    {
      int bit2=arr[i]-'a' ;
      sum+=bit2
    }
    bit=sum%2 ;
    carry = sum/2 ;
    res[i]=(char)(bit+'0'); 
    
  }
  if(carry>1)
  {
    return '1'+res;
  }
  return res ;

}



void addBinary(vector<int> &arr)
{
  string res="0";
  for(int i=0;i<arr.size();i++)
  {
    res=adds(res,arr[i]);
  }
  return res ;

}