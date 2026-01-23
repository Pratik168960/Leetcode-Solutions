// LeetCode Problem 2008_Maximum_Earnings_From_Taxi
// Status: Accepted
// Language: C++


class Solution {
public:
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        vector<long long> dp(n + 1, 0);
        vector<vector<pair<int, int>>> endAt(n + 1);

        for (auto& r : rides) {
            int start = r[0], end = r[1], tip = r[2];
            endAt[end].push_back({start, (end - start) + tip});
        }

        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i - 1];

            for (auto& ride : endAt[i]) {
                dp[i] = max(dp[i], dp[ride.first] + ride.second);
            }
        }

        return dp[n];
    }
};
