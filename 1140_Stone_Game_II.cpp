// LeetCode Problem 1140_Stone_Game_II
// Status: Accepted
// Language: C++

class Solution {
    int dp[105][105];
    int suf[105];
    int n;

    int solve(int i, int m) {
        if (i + 2 * m >= n) return suf[i];
        if (dp[i][m] != -1) return dp[i][m];

        int res = 0;
        for (int x = 1; x <= 2 * m; x++) {
            res = max(res, suf[i] - solve(i + x, max(m, x)));
        }
        return dp[i][m] = res;
    }

public:
    int stoneGameII(vector<int>& piles) {
        n = piles.size();
        memset(dp, -1, sizeof(dp));

        suf[n - 1] = piles[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = suf[i + 1] + piles[i];
        }

        return solve(0, 1);
    }
};
