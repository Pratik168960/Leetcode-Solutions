// LeetCode Problem 1861_Rotating_the_Box
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxgrid) {
        int m = boxgrid.size(), n = boxgrid[0].size();
        vector<vector<char>> r(n, vector<char>(m));
        
        for (int i = 0; i < m; ++i) {
            int e = n - 1;
            for (int j = n - 1; j >= 0; --j) {
                if (boxgrid[i][j] == '*') {
                    e = j - 1;
                } else if (boxgrid[i][j] == '#') {
                    boxgrid[i][j] = '.';
                    boxgrid[i][e] = '#';
                    e--;
                }
            }
        }
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                r[j][m - 1 - i] = boxgrid[i][j];
            }
        }
        
        return r;
    }
};
