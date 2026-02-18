// LeetCode Problem 693_Binary_Number_with_Alternating_Bits
// Status: Accepted
// Language: C++

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int last = -1;

        while (n > 0) {
            int bit = n % 2; 
            
            if (bit == last)
                return false;

            last = bit;
            n = n / 2;
        }
        return true;
    }
};
