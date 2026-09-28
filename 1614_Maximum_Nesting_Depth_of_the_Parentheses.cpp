// LeetCode Problem 1614_Maximum_Nesting_Depth_of_the_Parentheses
// Status: Accepted
// Language: C++


class Solution {
public:
    int maxDepth(string s) {
        int r = 0, d = 0;
        for (char c : s) {
            if (c == '(') r = max(r, ++d);
            else if (c == ')') d--;
        }
        return r;
    }
};
