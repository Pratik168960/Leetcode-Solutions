// LeetCode Problem 1914_Cyclically_Rotating_a_Grid
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size(), L = min(m, n) / 2;
        
        for (int l = 0; l < L; ++l) {
            vector<int> v;
            
            for (int j = l; j < n - l - 1; ++j) v.push_back(grid[l][j]);
            for (int i = l; i < m - l - 1; ++i) v.push_back(grid[i][n - l - 1]);
            for (int j = n - l - 1; j > l; --j) v.push_back(grid[m - l - 1][j]);
            for (int i = m - l - 1; i > l; --i) v.push_back(grid[i][l]);
            
            int s = v.size(), r = k % s, x = 0;
            
            for (int j = l; j < n - l - 1; ++j) grid[l][j] = v[(x++ + r) % s];
            for (int i = l; i < m - l - 1; ++i) grid[i][n - l - 1] = v[(x++ + r) % s];
            for (int j = n - l - 1; j > l; --j) grid[m - l - 1][j] = v[(x++ + r) % s];
            for (int i = m - l - 1; i > l; --i) grid[i][l] = v[(x++ + r) % s];
        }
        
        return grid;
    }
};
