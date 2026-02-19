// LeetCode Problem 696_Count_Binary_Substrings
// Status: Accepted
// Language: C++ 

class Solution {
public:
    int countBinarySubstrings(string s) {
        int r = 0, p = 0, c = 1;
        
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                c++;
            } else {
                r += min(p, c);
                p = c;
                c = 1;
            }
        }
        
        return r + min(p, c);
    }
};
