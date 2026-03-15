// LeetCode Problem 2221_Find_Triangular_Sum_of_an_Array
// Status: Accepted
// Language: C++

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        while (n > 1) {
            for (int i = 0; i < n - 1; ++i) {
                nums[i] = (nums[i] + nums[i + 1]) % 10;
            }
            n--;
        }
        return nums[0];
    }
};
