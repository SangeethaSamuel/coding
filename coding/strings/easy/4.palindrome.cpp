#include <iostream > 
using namespace std ;
int isPalindrome(string &s)
{
  int l=s.size();
  for(int i=0;i<l;i++)
  {
    if(s[i]!=s[l-1-i])
      return 0 ;
  }
  return 1;
}
void main()
{
  cout<<isPalindrome(str)<<endl 
}