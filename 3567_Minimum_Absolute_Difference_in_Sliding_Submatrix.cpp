// LeetCode Problem 3567_Minimum_Absolute_Difference_in_Sliding_Submatrix
// Status: Accepted
// Language: C++ 

class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
       int m = grid.size(), n = grid[0].size();
        vector<vector<int>> r(m - k + 1, vector<int>(n - k + 1)) ;
        

        for (int i = 0; i <= m - k; ++i) {
            for (int j = 0; j <= n - k; ++j) {
                set<int> s ;
                for (int x = i; x < i + k; ++x) {
                    for (int y = j; y < j + k; ++y) {
                        s.insert(grid[x][y]) ;
                    }
                }
                
                if (s.size() < 2) {

                    r[i][j] = 0 ;

                } else {

                    int d = INT_MAX, p = INT_MIN ;  
                    for (int v : s) {
                        if (p != INT_MIN) d = min(d, v - p) ;
                        p = v ;
                    }
                    r[i][j] = d;
                }
            }
        }
        

        return r ; 
    }
};
