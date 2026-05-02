// LeetCode Problem 788_Rotated_Digits
// Status: Accepted
// Language: C++

class Solution {
public:
    int rotatedDigits(int n) {
        int c = 0;
        for (int i = 1; i <= n; ++i) {
            int t = i, v = 1, d = 0;
            while (t > 0) {
                int r = t % 10;
                if (r == 3 || r == 4 || r == 7) {
                    v = 0;
                    break;
                }
                if (r == 2 || r == 5 || r == 6 || r == 9) {
                    d = 1;
                }
                t /= 10;
            }
            if (v && d) c++;
        }
        return c;
    }
};
