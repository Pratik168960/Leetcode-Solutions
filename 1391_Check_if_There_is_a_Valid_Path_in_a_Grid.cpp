// LeetCode Problem 1391_Check_if_There_is_a_Valid_Path_in_a_Grid
// Status: Accepted
// Language: C++

class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> v(m, vector<bool>(n, 0));
        queue<pair<int, int>> q;
        
        q.push({0, 0});
        v[0][0] = 1;

        auto u = [](int x){ return x==2||x==5||x==6; };
        auto d = [](int x){ return x==2||x==3||x==4; };
        auto l = [](int x){ return x==1||x==3||x==5; };
        auto r = [](int x){ return x==1||x==4||x==6; };

        while (q.size()) {
            auto [i, j] = q.front(); 
            q.pop();
            
            if (i == m - 1 && j == n - 1) return 1;
            
            int c = grid[i][j];
            
            if (i > 0 && u(c) && d(grid[i-1][j]) && !v[i-1][j]) {
                v[i-1][j] = 1; 
                q.push({i-1, j});
            }
            if (i < m - 1 && d(c) && u(grid[i+1][j]) && !v[i+1][j]) {
                v[i+1][j] = 1; 
                q.push({i+1, j});
            }
            if (j > 0 && l(c) && r(grid[i][j-1]) && !v[i][j-1]) {
                v[i][j-1] = 1; 
                q.push({i, j-1});
            }
            if (j < n - 1 && r(c) && l(grid[i][j+1]) && !v[i][j+1]) {
                v[i][j+1] = 1; 
                q.push({i, j+1});
            }
        }
        return 0;
    }
};
