// LeetCode Problem 2091_Removing_Minimum_and_Maximum_From_Array
// Status: Accepted
// Language: C++

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n; 
        
        int i = 0, j = 0;
        
        for (int k = 1; k < n; ++k) {
            if (nums[k] < nums[i]) i = k;
            if (nums[k] > nums[j]) j = k;
        }
        
        int l = min(i, j);
        int r = max(i, j);
        
        return min({r + 1, n - l, (l + 1) + (n - r)});
    }
};
