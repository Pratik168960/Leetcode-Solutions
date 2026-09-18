// LeetCode Problem 1520_Maximum_Number_of_Non_Overlapping_Substrings
// Status: Accepted
// Language: C++


class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        int n = s.size();
        vector<int> l(26, n), r(26, -1);
        
        for (int i = 0; i < n; i++) {
            l[s[i] - 'a'] = min(l[s[i] - 'a'], i);
            r[s[i] - 'a'] = max(r[s[i] - 'a'], i);
        }
        
        vector<pair<int, int>> intervals;
        for (int i = 0; i < 26; i++) {
            if (l[i] == n) continue;
            int right = r[i], ok = 1;
            for (int j = l[i]; j <= right; j++) {
                if (l[s[j] - 'a'] < l[i]) {
                    ok = 0;
                    break;
                }
                right = max(right, r[s[j] - 'a']);
            }
            if (ok) intervals.push_back({right, l[i]});
        }
        
        sort(intervals.begin(), intervals.end());
        vector<string> ans;
        int last = -1;
        
        for (auto [end, start] : intervals) {
            if (start > last) {
                ans.push_back(s.substr(start, end - start + 1));
                last = end;
            }
        }
        
        return ans;
    }
};
