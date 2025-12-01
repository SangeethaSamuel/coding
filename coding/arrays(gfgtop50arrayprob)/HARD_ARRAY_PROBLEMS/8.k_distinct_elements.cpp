// C++ Code to count the subarrays having exactly
// k distinct elements by exploring all subarrays

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int exactlyK(vector<int> &arr, int k) {
    int n = arr.size();
    int res = 0;

    // Iterate over all subarrays arr[i...j]
    for (int i = 0; i < n; i++) {

        // hash set to count distinct elements
        unordered_set<int> st;

        for (int j = i; j < n; j++) {
            st.insert(arr[j]);

            // If count of distinct elements > k, then
            // don't extend the subarray further
            if (st.size() > k)
                break;
            if (st.size() == k)
                res += 1;
        }
    }
    return res;
}

int main() {
    vector<int> arr = {1, 2, 2, 3};
    int k = 2;
    cout << exactlyK(arr, k);
}


//another
// C++ Code to count the subarrays having exactly
// k distinct elements by exploring all subarrays

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int atMostK(vector<int> &arr, int k) {
    int n = arr.size();
    int res = 0;

    // pointers to mark the left and right boundary
    int left = 0, right = 0;

    // Frequency map
    unordered_map<int, int> freq;
    while (right < n) {
        freq[arr[right]] += 1;

        // If this is a new element in the window,
        // decrement k by 1
        if (freq[arr[right]] == 1)
            k -= 1;

        // Shrink the window until distinct element
        // count becomes <= k
        while (k < 0) {
            freq[arr[left]] -= 1;
            if (freq[arr[left]] == 0)
                k += 1;
            left += 1;
        }

        // add all possible subarrays to result
        res += (right - left + 1);
        right += 1;
    }
    return res;
}

int exactlyK(vector<int> &arr, int k) {
    return atMostK(arr, k) - atMostK(arr, k - 1);
}

int main() {
    vector<int> arr = {1, 2, 2, 3};
    int k = 2;
    cout << exactlyK(arr, k);
}