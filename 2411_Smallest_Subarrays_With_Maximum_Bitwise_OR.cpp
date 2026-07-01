// LeetCode Problem 2411_Smallest_Subarrays_With_Maximum_Bitwise_OR
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        vector<int> nearest(32, 0);
        
        for (int i = n - 1; i >= 0; --i) {
            int max_idx = i;
            
            for (int bit = 0; bit < 32; ++bit) {
                if ((nums[i] >> bit) & 1) {
                    nearest[bit] = i; 
                }

                if (nearest[bit] > i) { 
                    max_idx = max(max_idx, nearest[bit]);
                }
            }
            
            ans[i] = max_idx - i + 1;
        }
        
        return ans;
    }
};
