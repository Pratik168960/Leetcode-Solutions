// LeetCode Problem 3264_Final_Array_State_After_K_Multiplication_Operations_I
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while (k--) {
            auto i = min_element(nums.begin(), nums.end()) ;
            *i *= multiplier ;
        }
        return nums ;
    }
};
