// LeetCode Problem 940_Distinct_Subsequences_II
// Status: Accepted
// Language: C++

class Solution {
public:
    int distinctSubseqII(string s) {
        int m = 1e9 + 7;
        vector<long long> dp(26, 0);
        long long sum = 0;

        for (char c : s) {
            long long add = (sum + 1 - dp[c - 'a'] + m) % m;
            sum = (sum + add) % m;
            dp[c - 'a'] = (dp[c - 'a'] + add) % m;
        }

        return sum;
    }
};
