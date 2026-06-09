// LeetCode Problem 3689_Maximum_Total_Subarray_Value_I
// Status: Accepted
// Language: C++


class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        auto [min_val, max_val] = minmax_element(nums.begin(), nums.end());
        
        long long max_diff = *max_val - *min_val;
        
        return max_diff * k;
    }
};
