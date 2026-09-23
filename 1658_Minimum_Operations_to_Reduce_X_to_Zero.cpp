// LeetCode Problem 1658_Minimum_Operations_to_Reduce_X_to_Zero
// Status: Accepted
// Language: C++


class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target = -x, sum = 0, l = 0, max_len = -1, n = nums.size();
        for (int num : nums) target += num;
        
        if (target < 0) return -1;
        
        for (int r = 0; r < n; ++r) {
            sum += nums[r];
            while (sum > target) {
                sum -= nums[l++];
            }
            if (sum == target) {
                max_len = max(max_len, r - l + 1);
            }
        }
        
        return max_len == -1 ? -1 : n - max_len;
    }
};
