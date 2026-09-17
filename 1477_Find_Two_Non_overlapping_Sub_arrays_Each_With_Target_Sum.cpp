// LeetCode Problem 1477_Find_Two_Non_overlapping_Sub_arrays_Each_With_Target_Sum
// Status: Accepted
// Language: C++


class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size(), sum = 0, l = 0, best = 1e9, ans = 1e9;
        vector<int> dp(n, 1e9);
        
        for (int r = 0; r < n; r++) {
            sum += arr[r];
            while (sum > target) sum -= arr[l++];
            
            if (sum == target) {
                if (l > 0) ans = min(ans, r - l + 1 + dp[l - 1]);
                best = min(best, r - l + 1);
            }
            dp[r] = best;
        }
        
        return ans > 1e8 ? -1 : ans;
    }
};
