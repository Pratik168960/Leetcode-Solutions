// LeetCode Problem 3212_Count_Submatrices_With_Equal_Frequency_of_X_and_Y
// Status: Accepted
// Language: C++ 

class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0 ;
        vector<int> x(n, 0), y(n, 0) ;
        
        for (int i = 0; i < m; ++i) {
            int rx = 0, ry = 0 ;
            for (int j = 0; j < n; ++j) {
                rx += grid[i][j] == 'X' ;
                ry += grid[i][j] == 'Y' ;
                
                x[j] += rx ;
                y[j] += ry ;
                
                if (x[j] == y[j] && x[j] > 0) {
                    ans++ ;
                }
            }
        }
        
        return ans ;
    }
}; 

