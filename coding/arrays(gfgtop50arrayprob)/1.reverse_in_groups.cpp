#include <iostream>
#include <vector>
using namespace std 

void rev_Gr(vector <int > arr , int k)
{
    for(int i=0;i<sizeof(arr);i++)
    {
        int left = i;
        int right = min(i+k-1,n-1);
        while(left<right)
        {
            swap(arr[left++],arr[right--]);
        }
    }
}

void main()
{
    vector <int> arr={1,2,3,4,5,6,7,8};
    rev_Gr(arr,3);
    for( int num :arr)
    {
        cout << num << " ";
    }
    
}

/*
for(int i=0;i<n;i++)
{
int left=i;
int right=min(i+k-1,n-1);
while(left<right)
{
    swap(arr[left++],arr[right--]);
}


}

*/