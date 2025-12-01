void small_range()
{
  int k=mat.size();
  int n=mat[0].size() ;
  vector<int>ptr(k,0);
  while(true)
  {
    int maxval=INT_MIN , minval=INT_MAX,minrow=-1;
    for(int i=0;i<k;i++)
    {
      if(ptr[i]==n)
        return {start ,end};
      if(mat[i][ptr[i]]<minval)
      {
        minval=mat[i][ptr[i]];
        minrow=i;
      }
      if(mat[i][ptr[i]]>maxval)
      {
        maxval=mat[i][ptr[i]];
      }
      if(maxval-minval<minrange)
       {
          minrange=maxval-minval ;
          start = minval;
          end=maxval ;
       } 
      ptr[minrow]++;
    }
  }
  return {start ,end};
}

//solution 2 -min heap
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

// Class to represent elements in the heap
class Node {
public:
    int val, row, col;

    Node(int v, int r, int c) {
        val = v;
        row = r;
        col = c;
    }

    // Overload > operator for min-heap
    bool operator>(const Node& other) const {
        return val > other.val;
    }
};

vector<int> findSmallestRange(vector<vector<int>>& mat) {
    int N = mat.size();        
    int K = mat[0].size();   
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    int maxVal = INT_MIN;

    // Push the first element of each list into the min-heap
    for (int i = 0; i < N; i++) {
        pq.push(Node(mat[i][0], i, 0));
        maxVal = max(maxVal, mat[i][0]);
    }

    int minRange = INT_MAX, minEl = 0, maxEl = 0;

    while (true) {
        Node curr = pq.top(); pq.pop();
        int minVal = curr.val;

        // Update range if better
        if (maxVal - minVal < minRange) {
            minRange = maxVal - minVal;
            minEl = minVal;
            maxEl = maxVal;
        }

        // If we've reached the end of a list, break
        if (curr.col + 1 == K) break;

        // Push next element from the same list
        int nextVal = mat[curr.row][curr.col + 1];
        pq.push(Node(nextVal, curr.row, curr.col + 1));
        maxVal = max(maxVal, nextVal);
    }

    return {minEl, maxEl};
}

int main() {
    vector<vector<int>> mat = {
        {4, 7, 9, 12, 15},
        {0, 8, 10, 14, 20},
        {6, 12, 16, 30, 50}
    };

    vector<int> result = findSmallestRange(mat);
    cout << result[0] << " " << result[1];

    return 0;
}
s
