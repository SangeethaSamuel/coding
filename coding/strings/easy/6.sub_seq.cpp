//s1 sub of s2 os if s1> not possible(sub means remove from s2 to get s1)
#include <iostream>
using namespace std ;

bool subseq(int a , int b)
{
  /*int a =s1.size();
  int b=s2.size();*/
  if(a==0)
    return true ;
  if(b==0)
    return false
  if(s[m-1]==s[n-1])
    return subseq(m-1,n-1)
  return subseq(m,n-1);


}

/*void main()
{
  if(s1>s2)
    //-1
}*/