// LeetCode Problem 1984_Minimum_Difference_Between_Highest_and_Lowest_of_K_Scores
// Status: Accepted
// Language: C++

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int min_diff = INT_MAX;
       
        for (int i = 0; i <= n - k; i++) {
            
            
            int current_diff = nums[i + k - 1] - nums[i];
            
            if (current_diff < min_diff) {
                min_diff = current_diff;
            }
        }
        
        return min_diff;
    }
};
