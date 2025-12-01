#include<vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
vector <int> add_one(vector<int> &arr){
  
  int n=arr.size();
  for(int i=n-1; i>=0; i--){
    int sum=arr[i]+carry;
    arr[i]=sum%10;
    carry=sum/10;
  }
  if(carry)
  {
    arr.insert(arr.begin(),carry);
  }
  return arr;
}

//S2
int n=arr.size();
while(n>=0 && arr[n]==9)
{
  arr[n--]=0;
}
if(n<0)
{
  arr.insert(arr.begin(),1);
}
else
  arr[n]++;
  
