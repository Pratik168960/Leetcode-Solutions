// LeetCode Problem 301_Remove_Invalid_Parentheses
// Status: Accepted
// Language: C++


class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        auto isValid = [](const string& str) {
            int count = 0;
            for (char c : str) {
                if (c == '(') count++;
                else if (c == ')') count--;
                if (count < 0) return false;
            }
            return count == 0;
        };

        vector<string> res;
        queue<string> q;
        unordered_set<string> visited;

        q.push(s);
        visited.insert(s);
        bool found = false;

        while (!q.empty()) {
            string curr = q.front();
            q.pop();

            if (isValid(curr)) {
                res.push_back(curr);
                found = true;
            }

            if (found) continue;

            for (int i = 0; i < curr.length(); i++) {
                if (curr[i] != '(' && curr[i] != ')') continue;
                string next = curr.substr(0, i) + curr.substr(i + 1);
                if (!visited.count(next)) {
                    q.push(next);
                    visited.insert(next);
                }
            }
        }
        
        return res;
    }
};
