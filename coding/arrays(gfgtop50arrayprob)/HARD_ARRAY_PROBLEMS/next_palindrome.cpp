#include <iostream>
#include <vector>
using namespace std;

int checkPalindrome(vector<int>& num) {
    int n = num.size();
    for (int i = 0; i < n / 2; ++i) {
        if (num[i] != num[n - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

vector<int> nextPalindrome(vector<int>& num) {
    int n = num.size();

    // Increase the number by 1 and check for palindrome
    while (!checkPalindrome(num)) {
        
        // Add 1 to the number
        int carry = 1;
        for (int i = n - 1; i >= 0; --i) {
            num[i] += carry;
            if (num[i] == 10) {
                num[i] = 0;
                carry = 1;
            } else {
                carry = 0;
                break;
            }
        }

        // If there's still a carry, insert 1 at the beginning
        if (carry == 1) {
            num.insert(num.begin(), 1);
            n++;
        }
    }

    return num;
}

int main() {
    vector<int> num = {9, 4, 1, 8, 7, 9, 7, 8, 3, 2, 2};
    
    vector<int> res = nextPalindrome(num);
    
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}

//SOLUTION2
// C++ Program to generate the next palindrome of a given number

#include <iostream>
#include <vector>
using namespace std;

// A utility function to check if all digits in num[] are 9
int AreAll9s(const vector<int>& num) {
    for (int i = 0; i < num.size(); ++i) {
        if (num[i] != 9) return 0;
    }
    return 1;
}

// Function to generate the next palindrome
void nextPalindromeUtil(vector<int>& num) {
    int n = num.size();
    int mid = n / 2;
    bool leftSmaller = false;
    int i = mid - 1;
    int j = (n % 2) ? mid + 1 : mid;

    // Compare the left side with the right side
    while (i >= 0 && num[i] == num[j]) i--, j++;

    // Check if we need to increment the middle digit(s)
    if (i < 0 || num[i] < num[j]) leftSmaller = true;

    // Copy the left half to the right half
    while (i >= 0) {
        num[j] = num[i];
        j++;
        i--;
    }

    // If middle digits need to be incremented
    if (leftSmaller) {
        int carry = 1;
        i = mid - 1;
        if (n % 2 == 1) {
            num[mid] += carry;
            carry = num[mid] / 10;
            num[mid] %= 10;
            j = mid + 1;
        } else {
            j = mid;
        }

        while (i >= 0) {
            num[i] += carry;
            carry = num[i] / 10;
            num[i] %= 10;
            num[j++] = num[i--];
        }
    }
}

// Function to generate the next palindrome
vector<int> nextPalindrome(vector<int>& num) {
    vector<int> ans;
    if (AreAll9s(num)) {
        ans.push_back(1);
        for (int i = 1; i < num.size(); i++) ans.push_back(0);
        ans.push_back(1);
    } else {
        nextPalindromeUtil(num);
        for (int i = 0; i < num.size(); i++) {
            ans.push_back(num[i]);
        }
    }
    return ans;
}

int main() {
    vector<int> num = {9, 4, 1, 8, 7, 9, 7, 8, 3, 2, 2};
    vector<int> result = nextPalindrome(num);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}