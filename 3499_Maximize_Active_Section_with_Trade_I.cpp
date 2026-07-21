// LeetCode Problem 3499_Maximize_Active_Section_with_Trade_I
// Status: Accepted
// Language: C++

class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        vector<pair<int, int>> b;
        int c = 0, m = 0, i = 0, j, n = s.size();
        for (; i < n; i = j) {
            for (j = i; j < n && s[j] == s[i]; j++);
            b.push_back({s[i] - '0', j - i});
            if (s[i] == '1') c += j - i;
            else m = max(m, j - i);
        }
        int r = c, k = b.size();
        for (i = 1; i + 1 < k; i++) {
            if (b[i].first) {
                r = max(r, c - b[i].second + max(m, b[i-1].second + b[i].second + b[i+1].second));
            }
        }
        return r;
    }
};
