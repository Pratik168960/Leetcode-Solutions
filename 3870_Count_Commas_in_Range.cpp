// LeetCode Problem 3870_Count_Commas_in_Range
// Status: Accepted
// Language: C++


class Solution {
public:
    int countCommas(int n) {
        return n < 1000 ? 0 : n - 999;
    }
};
