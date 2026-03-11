// LeetCode Problem 1009_Complement_of_Base_10_Integer
// Status: Accepted
// Language: C++

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;
        
        long long x = 1;
        while (x <= n) {
            x = x * 2;
        }
        
        return x - 1 - n;
    }
};
