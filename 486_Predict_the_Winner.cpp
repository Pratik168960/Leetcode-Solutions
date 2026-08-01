// LeetCode Problem 486_Predict_the_Winner
// Status: Accepted
// Language: C++

class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int s = nums.size();
        vector<int> d = nums;
        
        for (int i = s - 2; i >= 0; --i)
            for (int j = i + 1; j < s; ++j)
                d[j] = max(nums[i] - d[j], nums[j] - d[j - 1]);
                
        return d[s - 1] >= 0;
    }
};
