// LeetCode Problem 3524_Find_X_Value_of_Array_I
// Status: Accepted
// Language: C++


class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ans(k, 0), dp(k, 0);
        
        for (int x : nums) {
            vector<long long> t(k, 0);
            int v = x % k;
            t[v] = 1;
            
            for (int i = 0; i < k; i++) {
                t[(i * v) % k] += dp[i];
            }
            
            dp = t;
            for (int i = 0; i < k; i++) {
                ans[i] += dp[i];
            }
        }
        
        return ans;
    }
};
