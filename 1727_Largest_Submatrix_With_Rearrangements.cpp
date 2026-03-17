// LeetCode Problem 1727_Largest_Submatrix_With_Rearrangements
// Status: Accepted
// Language: C++

class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), res = 0;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] && i > 0) {
                    matrix[i][j] += matrix[i - 1][j];
                }
            }
            
            vector<int> v = matrix[i];
            sort(v.rbegin(), v.rend());
            
            for (int j = 0; j < n; ++j) {
                res = max(res, v[j] * (j + 1));
            }
        }
        
        return res;
    
    }
};
