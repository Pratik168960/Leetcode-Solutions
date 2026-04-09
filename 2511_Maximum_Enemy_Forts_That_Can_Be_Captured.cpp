// LeetCode Problem 2511_Maximum_Enemy_Forts_That_Can_Be_Captured
// Status: Accepted
// Language: C++ 

class Solution {
public:
    int captureForts(vector<int>& forts) {
        int m = 0, j = -1, n = forts.size();
        for (int i = 0; i < n; ++i) {
            if (forts[i] != 0) {
                if (j != -1 && forts[i] == -forts[j]) {
                    m = max(m, i - j - 1);
                }
                j = i;
            }
        }
        return m;
    }
};
