// LeetCode Problem 1752_Check_if_Array_Is_Sorted_and_Rotated
// Status: Accepted
// Language: C++

class Solution {
public:
    bool check(vector<int>& nums) {
        int c = 0, n = nums.size();
        for (int i = 0; i < n; ++i)
            if (nums[i] > nums[(i + 1) % n]) c++;
        return c <= 1;
    }
};
