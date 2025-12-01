/*ANOTHER SOLUTION IS TO PUSHBACK POSITIVE AND NEGATIVE DIGITS TO TWO ARRAYS 
AND THEN PUSH POSITIVE IN i%2==0 AND NEGATIVE IN i%2==1 POSITONS
*/

#include <bits/stdc++.h>
#include <iostrem>

using namespace std ;
void right_rotate(vector<int> arr , int begin, int end ){
  int x=arr[end];
  for(int i=end ;i>begin;i--){
    arr[i]=arr[i-1];

  }
  arr[begin]=x;
}
void alt(vector <int> arr )
{
  int n= arr.size();
  for(int i=0;i<n;i++)
  {
    if(arr[i]>0 && i%2==1)
    {
      for(int j=i+1;j<n;j++)
      {
        if(arr[j]<0){
          right_rotate(i,j);
          break;
        }
      }
    }
    if(arr[i]<0 && i&2==0)
    {
      for(int j=i;j<n;j++)
      {
        if(arr[j]>0)
        {
          right_rotate(i,j);
          break;
        }
      }
    }
  }


}