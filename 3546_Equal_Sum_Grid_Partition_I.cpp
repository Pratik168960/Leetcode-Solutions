// LeetCode Problem 3546_Equal_Sum_Grid_Partition_I
// Status: Accepted
// Language: C++ 

class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<long long> r(m), c(n);
        long long t = 0;
        
        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                r[i] += grid[i][j];
                c[j] += grid[i][j];
                t += grid[i][j];
            }
        }
        
        long long s = 0;
        for(int i = 0; i < m - 1; ++i) {
            s += r[i];
            if(s * 2 == t) return true;
        }
        
        s = 0;
        for(int j = 0; j < n - 1; ++j) {
            s += c[j];
            if(s * 2 == t) return true;
        }
        
        return false;
    }
};
