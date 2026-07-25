// LeetCode Problem 3536_Maximum_Product_of_Two_Digits
// Status: Accepted
// Language: C++

class Solution {
public:
    int maxProduct(int n) {
        int a = 0, b = 0;
        while (n) {
            int d = n % 10;
            if (d > a) {
                b = a;
                a = d;
            } else if (d > b) {
                b = d;
            }
            n /= 10;
        }
        return a * b;
    }
};
