// LeetCode Problem 3300_Minimum_Element_After_Replacement_With_Digit_Sum
// Status: Accepted
// Language: C++


class Solution {
public:
    int minElement(vector<int>& nums) {
        int m = INT_MAX; 
        for (int x : nums) {
            int s = 0;
            while (x) {
                s += x % 10;
                x /= 10;
            }
            m = min(m, s);
        }
        return m;
    }
};
