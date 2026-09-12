// LeetCode Problem 3414_Maximum_Score_of_Non_overlapping_Intervals
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<array<int, 4>> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = {intervals[i][0], intervals[i][1], intervals[i][2], i};
        }
        
        sort(a.begin(), a.end());
        
        vector<vector<pair<long long, vector<int>>>> dp(n + 1, vector<pair<long long, vector<int>>>(5));
        
        for (int i = n - 1; i >= 0; i--) {
            int nx = upper_bound(a.begin(), a.end(), a[i][1], [](int v, const array<int, 4>& arr) {
                return v < arr[0];
            }) - a.begin();
            
            for (int k = 1; k <= 4; k++) {
                auto t = dp[nx][k - 1];
                t.first += a[i][2];
                t.second.push_back(a[i][3]);
                sort(t.second.begin(), t.second.end());
                
                auto s = dp[i + 1][k];
                
                if (t.first > s.first) dp[i][k] = t;
                else if (t.first < s.first) dp[i][k] = s;
                else dp[i][k] = t.second < s.second ? t : s;
            }
        }
        
        return dp[0][4].second;
    }
};
