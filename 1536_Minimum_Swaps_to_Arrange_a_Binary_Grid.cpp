// LeetCode Problem 1536_Minimum_Swaps_to_Arrange_a_Binary_Grid
// Status: Accepted
// Language: C++

class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size() ;
        vector<int> z(n, 0) ;
        
        for (int i = 0; i < n; ++i) {
            for (int j = n - 1; j >= 0; --j) {
                if (grid[i][j] == 0) z[i]++;
                else break;
            }
        }
        
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int req = n - 1 - i;
            int j = i;
            
            while (j < n && z[j] < req) {
                j++;
            }
            
            if (j == n) return -1;
            
            ans += j - i;
            while (j > i) {
                swap(z[j], z[j - 1]);
                j--;
            }
        }
        
        return ans;
    }
};
