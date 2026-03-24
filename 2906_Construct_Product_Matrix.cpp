// LeetCode Problem 2906_Construct_Product_Matrix
// Status: Accepted
// Language: C++ 

class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> p(n, vector<int>(m, 1));
        long long f = 1, s = 1;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                p[i][j] = f;
                f = (f * grid[i][j]) % 12345;
            }
        }
        
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                p[i][j] = (p[i][j] * s) % 12345;
                s = (s * grid[i][j]) % 12345;
            }
        }
        
        return p;
    }
};
