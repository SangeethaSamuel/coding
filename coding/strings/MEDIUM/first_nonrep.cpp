/*
char nonRep(string &s) {
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        bool found = false;

        for (int j = 0; j < n; ++j) {
            if (i != j && s[i] == s[j]) {
                found = true;
                break;
            }
        }
        if (!found) 
            return s[i];
    }

    return '$';
}
*/

char nonrep()
{
  int n =arr.length() ;
  vector <int> vis(26,{-1}) ;
  for(int i=0;i<n;i++)
  {
    char ch=arr[i];
    int idx=ch-'a';
    if(vis[idx]==-1)
      vis[idx]=idx;
    else
      vis[idx]=-2
  }
  int idx=- 1;
  for(int count : vis)
  {
    if(vis[count]>=0 &&(idx==-)) || (vis[count < vis[idx]])
      idx=vis[count];
  }
  return (idx==-1) ? '$' : arr[vis[idx]] ;
}