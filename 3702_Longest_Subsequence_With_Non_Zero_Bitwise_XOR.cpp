// LeetCode Problem 3702_Longest_Subsequence_With_Non_Zero_Bitwise_XOR
// Status: Accepted
// Language: C++

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int total_xor = 0;
        bool has_non_zero = false;
        
        for (int num : nums) {
            total_xor ^= num;
            if (num != 0) {
                has_non_zero = true;
            }
        }
        
        if (total_xor != 0) {
            return nums.size();
        } 
        else if (has_non_zero) {
            return nums.size() - 1;
        } 
        else {
            return 0;
        }
    }
};
