// LeetCode Problem 3719_Longest_Balanced_Subarray_I
// Status: Accepted
// Language: C++

class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size() ;
        int maxLen = 0 ;

        for (int i = 0; i < n; ++i) {
            unordered_set<int> E;
            unordered_set<int> O;

            for (int j = i; j < n; ++j) {
                if (nums[j] % 2 == 0) {
                    E.insert(nums[j]);
                } else {
                    O.insert(nums[j]);
                }

                if (E.size() == O.size()) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }

        return maxLen;
    }
};
