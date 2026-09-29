// LeetCode Problem 2267_Check_if_There_Is_a_Valid_Parentheses_String_Path
// Status: Accepted
// Language: C++


class Solution {
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        if ((m + n) % 2 == 0 || grid[0][0] == ')' || grid[m-1][n-1] == '(') return false;
        
        int mx = (m + n) / 2;
        vector<vector<vector<bool>>> dp(m, vector<vector<bool>>(n, vector<bool>(mx + 2, false)));
        dp[0][0][1] = true;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k <= mx; ++k) {
                    if (dp[i][j][k]) {
                        if (i + 1 < m) {
                            int nk = k + (grid[i+1][j] == '(' ? 1 : -1);
                            if (nk >= 0 && nk <= mx) dp[i+1][j][nk] = true;
                        }
                        if (j + 1 < n) {
                            int nk = k + (grid[i][j+1] == '(' ? 1 : -1);
                            if (nk >= 0 && nk <= mx) dp[i][j+1][nk] = true;
                        }
                    }
                }
            }
        }
        
        return dp[m-1][n-1][0];
    }
};
