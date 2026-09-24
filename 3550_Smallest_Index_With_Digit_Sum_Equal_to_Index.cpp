// LeetCode Problem 3550_Smallest_Index_With_Digit_Sum_Equal_to_Index
// Status: Accepted
// Language: C++


class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            int sum = 0, temp = nums[i];
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum == i) return i;
        }
        return -1;
    }
};
