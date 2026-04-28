// LeetCode Problem 2033_Minimum_Operations_to_Make_a_Uni-Value_Grid
// Status: Accepted
// Language: C++

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size(), n = grid[0].size(); 
        vector<int> nums;
        
        // 2D se 1D 
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                nums.push_back(grid[i][j]);
            }
        }
        
        // check if possible , mod equal for all 
        int mod = nums[0] % x;
        for (int num : nums) {
            if (num % x != mod) {
                return -1;
            }
        }
        

        sort(nums.begin(), nums.end());
        int median = nums[nums.size() / 2];
        

        int operations = 0;
        for (int num : nums) {
            operations += abs(num - median) / x;
        }
        
        return operations;    }
};
