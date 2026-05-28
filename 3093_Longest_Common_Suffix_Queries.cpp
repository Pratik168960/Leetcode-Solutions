// LeetCode Problem 3093_Longest_Common_Suffix_Queries
// Status: Accepted
// Language: C++

struct T {
    int id = -1;
    int c[26] = {}; 
};

class Solution {
public:
    vector<int> stringIndices(vector<string>& wc, vector<string>& wq) {
        vector<T> t(1); 
        
        auto upd = [&](int n, int i) {
            if (t[n].id == -1 || wc[i].size() < wc[t[n].id].size()) t[n].id = i;
        };
        
        for (int i = 0; i < wc.size(); ++i) {
            int n = 0; 
            upd(n, i);
            for (int j = wc[i].size() - 1; j >= 0; --j) {
                int k = wc[i][j] - 'a';
                if (!t[n].c[k]) {
                    t[n].c[k] = t.size();
                    t.push_back(T()); 
                }
                n = t[n].c[k];
                upd(n, i);
            }
        }
        
        vector<int> ans;
        for (auto& q : wq) {
            int n = 0;
            for (int j = q.size() - 1; j >= 0; --j) {
                if (!t[n].c[q[j] - 'a']) break;
                n = t[n].c[q[j] - 'a'];
            }
            ans.push_back(t[n].id);
        }
        return ans;
    }
};
