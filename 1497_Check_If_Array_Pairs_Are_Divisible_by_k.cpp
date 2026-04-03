// LeetCode Problem 1497_Check_If_Array_Pairs_Are_Divisible_by_k
// Status: Accepted
// Language: C++ 

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> f(k, 0);
        for (int x : arr) {
            int r = ((x % k) + k) % k;
            f[r]++;
        }
        if (f[0] % 2 != 0) return false;
        for (int i = 1; i <= k / 2; i++) {
            if (f[i] != f[k - i]) return false;
        }
        return true;
    }
};
