// LeetCode Problem 921_Minimum_Add_to_Make_Parentheses_Valid
// Status: Accepted
// Language: C++


class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0, close = 0;
        for (char c : s) {
            if (c == '(') open++;
            else if (open > 0) open--;
            else close++;
        }
        return open + close;
    }
};
