// LeetCode Problem 3314_Construct_the_Minimum_Bitwise_Array_I
// Status: Accepted
// Language: C++


class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        ans.reserve(nums.size());
        
        for (int n : nums) {
            if (n == 2) {
                ans.push_back(-1);
            } else {

                int bit = 0;
                while ((n >> bit) & 1) {
                    bit++;
                }

                ans.push_back(n - (1 << (bit - 1)));
            }
        }
        
        return ans;
    }
};
