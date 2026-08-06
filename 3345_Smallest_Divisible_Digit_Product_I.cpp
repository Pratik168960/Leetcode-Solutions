// LeetCode Problem 3345_Smallest_Divisible_Digit_Product_I
// Status: Accepted
// Language: C++

class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int prod = 1;
            int temp = n;
            
            while (temp > 0) {
                prod *= (temp % 10);
                temp /= 10;
            }
            
            if (prod % t == 0) {
                return n;
            }
            
            n++;
        }
    }
};
