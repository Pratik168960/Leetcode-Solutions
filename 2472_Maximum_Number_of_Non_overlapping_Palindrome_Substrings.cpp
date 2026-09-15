// LeetCode Problem 2472_Maximum_Number_of_Non_overlapping_Palindrome_Substrings
// Status: Accepted
// Language: C++


class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size(), dp[2005] = {};
        
        for (int i = 0; i < n; i++) {
            dp[i + 1] = max(dp[i + 1], dp[i]);
            
            for (int j = 0; j < 2; j++) {
                for (int l = i, r = i + j; l >= 0 && r < n && s[l] == s[r]; l--, r++) {
                    if (r - l + 1 >= k) {
                        dp[r + 1] = max(dp[r + 1], dp[l] + 1);
                    }
                }
            }
        }
        
        return dp[n];
    }
};
