// LeetCode Problem 1878_Get_Biggest_Three_Rhombus_Sums_in_a_Grid
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        set<int> s;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int l = 0; i + 2 * l < m && j - l >= 0 && j + l < n; ++l) {
                    if (l == 0) {
                        s.insert(grid[i][j]);
                    } else {
                        int sum = 0, x = i, y = j;
                        for (int k = 0; k < l; ++k) sum += grid[x++][y++];
                        for (int k = 0; k < l; ++k) sum += grid[x++][y--];
                        for (int k = 0; k < l; ++k) sum += grid[x--][y--];
                        for (int k = 0; k < l; ++k) sum += grid[x--][y++];
                        s.insert(sum);
                    }
                }
            }
        }
        
        vector<int> res;
        for (auto it = s.rbegin(); it != s.rend() && res.size() < 3; ++it) {
            res.push_back(*it);
        }
        
        return res;
    }
};
