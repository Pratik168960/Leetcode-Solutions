// LeetCode Problem 1621_Number_of_Sets_of_K_Non_Overlapping_Line_Segments
// Status: Accepted
// Language: C++

class Solution {
public:
    int numberOfSets(int n, int k) {
        int dp[2005] = {1};
        
        for (int i = 1; i < n + k; i++) {
            for (int j = min(i, 2 * k); j > 0; j--) {
                dp[j] = (dp[j] + dp[j - 1]) % 1000000007;
            }
        }
        
        return dp[2 * k];
    }
};
