//later check out dp of interleaving strings
#include <iostream>
using namespace std;

bool isInleaveRec(string &s1, string &s2, string &s3, int i, int j){

    int k = i + j;

    // If all strings are fully traversed
    if (i == s1.size() && j == s2.size() && k == s3.size())
        return true;
        
    bool a = (i < s1.size()) && (s3[k] == s1[i]) 
    && isInleaveRec(s1, s2, s3, i + 1, j);
    
    bool b = (j < s2.size()) && (s3[k] == s2[j]) 
    && isInleaveRec(s1, s2, s3, i, j + 1);
    
    // If any of the above two possibilities return true
    // otherwise return false.
    return a || b;
}

bool isInterleave(string &s1, string &s2, string &s3)
{
    if (s1.size() + s2.size() != s3.size())
        return false;

    return isInleaveRec(s1, s2, s3, 0, 0);
}

int main()
{
    string s1 = "AAB";
    string s2 = "AAC";
    string s3 = "AAAABC";
    cout << (isInterleave(s1, s2, s3) ? "true" : "false") << endl;
    return 0;
}