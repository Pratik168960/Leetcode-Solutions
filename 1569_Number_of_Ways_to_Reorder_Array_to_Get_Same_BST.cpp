// LeetCode Problem 1569_Number_of_Ways_to_Reorder_Array_to_Get_Same_BST
// Status: Accepted
// Language: C++



class Solution {
    int m = 1e9 + 7;
    vector<vector<long long>> c;
    
    long long f(vector<int>& a) {
        int k = a.size();
        if (k <= 2) return 1;
        
        vector<int> l, r;
        for (int i = 1; i < k; i++) {
            if (a[i] < a[0]) l.push_back(a[i]);
            else r.push_back(a[i]);
        }
        
        long long w = c[k - 1][l.size()];
        w = (w * f(l)) % m;
        w = (w * f(r)) % m;
        return w;
    }
    
public:
    int numOfWays(vector<int>& a) {
        int n = a.size();
        c.assign(n, vector<long long>(n, 0));
        
        for (int i = 0; i < n; i++) {
            c[i][0] = c[i][i] = 1;
            for (int j = 1; j < i; j++) {
                c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % m;
            }
        }
        
        return (f(a) - 1 + m) % m;
    }
};
