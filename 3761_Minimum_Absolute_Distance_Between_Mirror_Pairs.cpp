// LeetCode Problem 3761_Minimum_Absolute_Distance_Between_Mirror_Pairs
// Status: Accepted
// Language: C++

class Solution {
    int r(int x) {
        int y = 0;
        while (x) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        return y;
    }
public:
    int minMirrorPairDistance(vector<int>& a) {
        unordered_map<int, int> m;
        int d = INT_MAX;
        for (int i = 0; i < a.size(); ++i) {
            if (m.count(a[i])) {
                d = min(d, i - m[a[i]]);
            }
            m[r(a[i])] = i;
        }
        return d == INT_MAX ? -1 : d;
    }
};
