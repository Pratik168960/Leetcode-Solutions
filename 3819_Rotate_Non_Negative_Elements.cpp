// LeetCode Problem 3819_Rotate_Non_Negative_Elements
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> non_neg;
        
        for (int num : nums) {
            if (num >= 0) {
                non_neg.push_back(num);
            }
        }
        
        if (non_neg.empty()) {
            return nums;
        }
        
        int m = non_neg.size();
        k = k % m; 
        
        int j = 0; 
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                nums[i] = non_neg[(j + k) % m];
                j++;
            }
        }
        
        return nums;
    }
};
