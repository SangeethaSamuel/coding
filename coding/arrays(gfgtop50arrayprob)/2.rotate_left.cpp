//SOLUION1->TEMPRORAY ARRAY
#include <iostream .
#include <vector>
using namespace std ;
void rotate_left(vector<int> arr , left){
  int n=arr.size();
  vector <int> temp(arr);
  
    for(int i=0;i<n-d;i++){
      temp[i]=arr[d+i];
    }
    for(int i=0;i<d;i++){
      temp[n-d+i]=arr[i];
    }
    for(int i=0;i<n;i++){
      arr[i]=temp[i];
    }
  
}

//SOLUTION2->REVERSAL ALGORITHM
#include <iostream>
#include <vector>
using namespace std;
void rev_left(vector<int> arr, int d)
{
  int n=arr.size();
  reverse (arr.begin(),arr.begin()+d);
  reverse(arr.begin()+d,arr.end());
  reverse(arr.begin(),arr.end());
    
  
}

//SOLUTION 3
