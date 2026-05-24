// LeetCode Problem 1340_Jump_Game_V
// Status: Accepted
// Language: C++

class Solution {
    int n;
    vector<int> dp;

    int dfs(vector<int>& arr, int i, int d) {
        if (dp[i]) return dp[i];
        int r = 1;
        
        for (int j = i + 1; j <= min(i + d, n - 1) && arr[j] < arr[i]; ++j)
            r = max(r, 1 + dfs(arr, j, d));
            
        for (int j = i - 1; j >= max(i - d, 0) && arr[j] < arr[i]; --j)
            r = max(r, 1 + dfs(arr, j, d));
            
        return dp[i] = r;
    }

public:
    int maxJumps(vector<int>& arr, int d) {
        n = arr.size();
        dp.assign(n, 0);
        int m = 0;
        
        for (int i = 0; i < n; ++i)
            m = max(m, dfs(arr, i, d));
            
        return m;
    }
};
