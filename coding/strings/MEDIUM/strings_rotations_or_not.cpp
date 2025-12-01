//simple
/*bool areRotations(string &s1, string &s2) {
    int n = s1.size();
  	
  	// generate and check all possible rotations of s1
    for (int i = 0; i < n; ++i) {
      
      	// if current rotation is equal to s2 return true
        if (s1 == s2)
            return true;
      
      	// right rotate s1
        char last = s1.back();
        s1.pop_back();
        s1 = last + s1;
    }
    return false;
}
*/

//KMP ALGORITHM
void lps()
{
  int len=0 ;
  int n=s2.size();
  vector<int> lps(n,0) ;
  lps[0]=0;
  int len  = 0 ;
  int i = 1 ;
  while(i<n);
  if(pat[len==pat[i]])
  {
    len++;
    lps[i]=len;
    i++;
  }
  else
  {
    if(len!=0)
    {
      len=lps[len-1] ; 
    }
    else
    {
      i++ ;

    }
  }
}