// LeetCode Problem 1096_Brace_Expansion_II
// Status: Accepted
// Language: C++


class Solution {
public:
    vector<string> braceExpansionII(string expression) {
        set<string> q = {expression}, r;
        while (!q.empty()) {
            string s = *q.begin();
            q.erase(q.begin());
            int j = s.find('}');
            if (j == -1) {
                r.insert(s);
                continue;
            }
            int i = s.rfind('{', j);
            string a = s.substr(0, i), c = s.substr(j + 1), b = s.substr(i + 1, j - i - 1);
            int k = 0;
            while ((k = b.find(',')) != -1) {
                q.insert(a + b.substr(0, k) + c);
                b.erase(0, k + 1);
            }
            q.insert(a + b + c);
        }
        return vector<string>(r.begin(), r.end());
    }
};
