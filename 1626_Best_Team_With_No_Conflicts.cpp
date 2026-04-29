// LeetCode Problem 1626_Best_Team_With_No_Conflicts
// Status: Accepted
// Language: C++

class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = scores.size(), r = 0;
        vector<pair<int, int>> v(n);
        
        // Pair ages and scores together
        for (int i = 0; i < n; ++i) {
            v[i] = {ages[i], scores[i]};
        }
        
        // Sort primarily by age, and secondarily by score
        sort(v.begin(), v.end());
        
        vector<int> d(n);
        for (int i = 0; i < n; ++i) {
            d[i] = v[i].second;
            // Find the maximum score we can get by adding the current player
            for (int j = 0; j < i; ++j) {
                if (v[j].second <= v[i].second) {
                    d[i] = max(d[i], d[j] + v[i].second);
                }
            }
            // Keep track of the maximum overall score found
            r = max(r, d[i]);
        }
        return r;
    }
};
