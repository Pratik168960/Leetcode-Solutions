// LeetCode Problem 2574_Left_and_Right_Sum_Differences
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int rightSum = std::accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0;
        
        for (int& x : nums) {
            rightSum -= x;
            int diff = std::abs(leftSum - rightSum); 
            leftSum += x;
            x = diff;
        }
        
        return nums;
    }
};
