// LeetCode Problem 3498_Reverse_Degree_of_a_String
// Status: Accepted
// Language: C++


class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0, n = s.length();
        
        for (int i = 0; i < n; i++) {
            ans += (123 - s[i]) * (i + 1);
        }
        
        return ans;
    }
};
