// LeetCode Problem 1345_Jump_Game_IV
// Status: Accepted
// Language: C++

class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size(), s = 0;
        unordered_map<int, vector<int>> m;
        for (int i = 0; i < n; i++) m[arr[i]].push_back(i);
        vector<int> q{0}, v(n); v[0] = 1;
        
        for (; q.size(); s++) {
            vector<int> nq;
            for (int i : q) {
                if (i == n - 1) return s;
                auto& nx = m[arr[i]];
                nx.push_back(i - 1); 
                nx.push_back(i + 1);
                for (int j : nx) 
                    if (j >= 0 && j < n && !v[j]) v[j] = 1, nq.push_back(j);
                nx.clear();
            }
            q.swap(nq);
        }
        return 0;
    }
};
