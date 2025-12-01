void sortinterval()
{
  sort(slot1.begin(),slot1.end());
  sort(slot2.begin(),slot2.end());
  int x=slot1.size();
  int y=slot2.size();
  int i=0,j=0;
  while(i<x && j<y )
  {
    int l=max(slot1[i][0],slot2[j][0]);
    int r =max(slot1[i][1],slot2[j][1]);
    if(r-l>=d)
    {
      return {l,l+d} ;

    }
  }
}