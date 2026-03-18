// LeetCode Problem 3070_Count_Submatrices_with_Top_Left_Element_and_Sum_Less_Than_k
// Status: Accepted
// Language: C++

class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size(), ans = 0 ; 
        
        for (int i = 0 ; i < m ; ++i) {
            for (int j = 0 ; j < n ; ++j) {
                
                if (i > 0) grid[i][j] += grid[i-1][j] ;
                if (j > 0) grid[i][j] += grid[i][j-1] ;
                if (i > 0 && j > 0) grid[i][j] -= grid[i-1][j-1] ; 
                
                if (grid[i][j] <= k) ans++ ;
            }
        }
        
        return ans ;
    }
};
