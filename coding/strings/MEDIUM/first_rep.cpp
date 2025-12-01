string earliest_repeater()
{
  int count[26]={0};
  for(int i=0;i<n;i++)
  {
    char ch=arr[i];
    int idx=ch-'a';
    if(count[idx]!=0)
    {
      return string(1,ch);
    }
    count[idx]++;
  }
  return "-1" ;
}