// LeetCode Problem 22_Generate_Parentheses
// Status: Accepted
// Language: C++


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        function<void(int, int, string)> dfs = [&](int open, int close, string s) {
            if (s.length() == n * 2) {
                res.push_back(s);
                return;
            }
            if (open < n) dfs(open + 1, close, s + "(");
            if (close < open) dfs(open, close + 1, s + ")");
        };
        dfs(0, 0, "");
        return res;
    }
};
