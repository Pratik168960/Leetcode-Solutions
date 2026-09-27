// LeetCode Problem 1190_Reverse_Substrings_Between_Each_Pair_of_Parentheses
// Status: Accepted
// Language: C++


class Solution {
public:
    string reverseParentheses(string s) {
        vector<int> st;
        string r;
        for (char c : s) {
            if (c == '(') st.push_back(r.size());
            else if (c == ')') {
                reverse(r.begin() + st.back(), r.end());
                st.pop_back();
            } else r += c;
        }
        return r;
    }
};
