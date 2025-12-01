//1
bool imb(string &s)
{
  int n=s.size();
  for(int i=0;i<n;i++)
  {
    if(s[i]=='[')
      l++ ;
      if(imb>0)
      {
        swap+=imb ;
        imb--
      }
    else // ]
    {
      r++;
      imb=r-l;
    }
  }
}

//naive approacg
#include <iostream>
#include <string>
using namespace std;

int swapCount(string &s){
    int ans=0;
    
    //To store count of '['
    int count=0;
    int n=s.size();
    
    for(int i=0;i<n;i++){
        if(s[i]=='['){
            count++;
        }
        else{
            count--;
        }
        
        //When count becomes less than 0
        if(count<0){
            
            //Start searching for '[' from (i+1)th index
            int j=i+1;
            while(j<n){
                
                //When jth index contains '['
                if(s[j]=='['){
                    break;
                }
                j++;
            }
            
            //Increment answer
            ans+=j-i;
            
            //Set Count to 1 again
            count=1;
            
            //Bring character at jth position to ith position
            //and shift all character from i to j-1 
            //towards right 
            char ch=s[j];
            for(int k=j;k>i;k--){
                s[k]=s[k-1];
            }
            s[i]=ch;
        }
    }
    return ans;
}

int main()
{
    string s = "[]][][";
    cout << swapCount(s) << "\n";
    return 0;
}

//method3
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int swapCount(string &s){
    
    // Keep track of '['
    vector<int> pos;
    for (int i = 0; i < s.length(); ++i)
        if (s[i] == '[')
            pos.push_back(i);
            
     // To count number of encountered '['
    int count = 0; 
    
    // To track position of next '[' in pos
    int p = 0;  
    
    // To store result
    int  sum = 0; 
    for (int i = 0; i < s.length(); ++i){
        
        // Increment count and move p to next position
        if (s[i] == '[')
        {
            count++;
            p++;
        }
        else if (s[i] == ']')
            count--;

        // We have encountered an unbalanced part of string
        if (count < 0){
            
            // Increment sum by number of swaps required
            // i.e. position of next '[' - current position
            sum += pos[p] - i;
            swap(s[i], s[pos[p]]);
            ++p;

            // Reset count to 1
            count = 1;
        }
    }
    return sum;
}

int main()
{
    string s = "[]][][";
    cout << swapCount(s) << "\n";
    return 0;
}