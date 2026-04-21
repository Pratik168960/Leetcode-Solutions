// LeetCode Problem 1722_Minimize_Hamming_Distance_After_Swap_Operations
// Status: Accepted
// Language: C++


class Solution {
    vector<int> p;
    int f(int i) { return p[i] == i ? i : p[i] = f(p[i]); }
public:
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        int n = source.size(), d = 0;
        p.resize(n);
        iota(p.begin(), p.end(), 0);
        
        for (auto& w : allowedSwaps) p[f(w[0])] = f(w[1]);
        
        vector<unordered_map<int, int>> m(n);
        for (int i = 0; i < n; ++i) m[f(i)][source[i]]++;
        
        for (int i = 0; i < n; ++i) {
            if (m[f(i)][target[i]] > 0) m[f(i)][target[i]]--;
            else d++;
        }
        
        return d;
    }
};
