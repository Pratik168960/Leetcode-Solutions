// LeetCode Problem 3161_Block_Placement_Queries
// Status: Accepted
// Language: C++


class Solution {
    int tree[100010];
    
    void update(int i, int val) {
        for (tree[i += 50005] = val; i > 1; i >>= 1)
            tree[i >> 1] = max(tree[i], tree[i ^ 1]);
    }
    
    int query(int l, int r) {
        int res = 0;
        for (l += 50005, r += 50005; l < r; l >>= 1, r >>= 1) {
            if (l & 1) res = max(res, tree[l++]);
            if (r & 1) res = max(res, tree[--r]);
        }
        return res;
    }

public:
    vector<bool> getResults(vector<vector<int>>& qs) {
        set<int> s = {0};
        vector<bool> ans;
        
        for (auto& q : qs) {
            int x = q[1];
            if (q[0] == 1) {
                auto it = s.insert(x).first;
                
                update(x, x - *prev(it));
                
                if (next(it) != s.end()) {
                    update(*next(it), *next(it) - x);
                }
            } else {
                int p = *prev(s.upper_bound(x));
                ans.push_back(max(query(0, p + 1), x - p) >= q[2]);
            }
        }
        
        return ans;
    }
};
