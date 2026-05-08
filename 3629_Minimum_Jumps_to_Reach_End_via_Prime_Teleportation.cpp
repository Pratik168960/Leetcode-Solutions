// LeetCode Problem 3629_Minimum_Jumps_to_Reach_End_via_Prime_Teleportation
// Status: Accepted
// Language: C++

class Solution {
public:
    int minJumps(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;
        int m = *max_element(nums.begin(), nums.end());
        
        vector<int> spf(m + 1);
        iota(spf.begin(), spf.end(), 0);
        for (int i = 2; i * i <= m; ++i)
            if (spf[i] == i)
                for (int j = i * i; j <= m; j += i)
                    if (spf[j] == j) spf[j] = i;
        
        vector<vector<int>> g(m + 1);
        for (int i = 0; i < n; ++i) {
            int x = nums[i];
            while (x > 1) {
                int p = spf[x];
                g[p].push_back(i);
                while (x % p == 0) x /= p;
            }
        }
        
        vector<int> d(n, -1), pu(m + 1, 0);
        queue<int> q;
        q.push(0);
        d[0] = 0;
        
        while (!q.empty()) {
            int i = q.front();
            q.pop();
            
            if (i == n - 1) return d[i];
            
            for (int j : {i - 1, i + 1}) {
                if (j >= 0 && j < n && d[j] == -1) {
                    d[j] = d[i] + 1;
                    q.push(j);
                }
            }
            
            int p = nums[i];
            if (p > 1 && spf[p] == p && !pu[p]) {
                pu[p] = 1;
                for (int j : g[p]) {
                    if (d[j] == -1) {
                        d[j] = d[i] + 1;
                        q.push(j);
                    }
                }
            }
        }
        return -1;
    }
};
