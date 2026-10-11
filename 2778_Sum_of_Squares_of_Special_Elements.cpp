// LeetCode Problem 2778_Sum_of_Squares_of_Special_Elements 
// Status: Accepted
// Language: C++


class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            if (n % (i + 1) == 0) {
                sum += nums[i] * nums[i];
            }
        }
        
        return sum;
    }
};
