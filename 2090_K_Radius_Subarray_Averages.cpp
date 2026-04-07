// LeetCode Problem 2090_K_Radius_Subarray_Averages
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res(n, -1);
        long long sum = 0;
        long long len = 2LL * k + 1;
        
        if (len > n) return res;
        
        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            if (i >= len - 1) {
                res[i - k] = sum / len;
                sum -= nums[i - len + 1];
            }
        }
        
        return res;
    }
};
