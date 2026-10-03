// LeetCode Problem 32_Longest_Valid_Parentheses
// Status: Accepted
// Language: C++


class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int mx = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    st.push(i);
                } else {
                    mx = max(mx, i - st.top());
                }
            }
        }
        
        return mx;
    }
};
