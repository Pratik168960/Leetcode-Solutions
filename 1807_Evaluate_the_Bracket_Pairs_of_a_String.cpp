// LeetCode Problem 1807_Evaluate_the_Bracket_Pairs_of_a_String
// Status: Accepted
// Language: C++


class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> m;
        for (auto& x : knowledge) m[x[0]] = x[1];
        
        string r = "", t = "";
        bool b = false;
        
        for (char c : s) {
            if (c == '(') {
                b = true;
                t = "";
            } else if (c == ')') {
                b = false;
                r += m.count(t) ? m[t] : "?";
            } else if (b) {
                t += c;
            } else {
                r += c;
            }
        }
        
        return r;
    }
};
