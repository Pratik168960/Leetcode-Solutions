// LeetCode Problem 1081_Smallest_Subsequence_of_Distinct_Characters
// Status: Accepted
// Language: C++

class Solution {
public:
    string smallestSubsequence(string s) {
        int l[26] = {}, v[26] = {};
        for (int i = 0; i < s.size(); ++i) l[s[i] - 'a'] = i;
        string r;
        for (int i = 0; i < s.size(); ++i) {
            if (v[s[i] - 'a']) continue;
            while (r.size() && r.back() > s[i] && l[r.back() - 'a'] > i) {
                v[r.back() - 'a'] = 0;
                r.pop_back();
            }
            r += s[i];
            v[s[i] - 'a'] = 1;
        }
        return r;
    }
};
