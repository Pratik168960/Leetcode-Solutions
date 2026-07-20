// LeetCode Problem 1260_Shift_2D_Grid
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size(), t = m * n;
        vector<vector<int>> r(m, vector<int>(n));
        
        for (int i = 0; i < t; i++) {
            int j = (i + k) % t;
            r[j / n][j % n] = grid[i / n][i % n];
        }
        
        return r;
    }
};
