// LeetCode Problem 3099_Harshad_Number
// Status: Accepted
// Language: C++


class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int originalX = x;
        int sum = 0;

        while (x > 0) {
            int digit = x % 10;
            sum += digit;
            x /= 10;
        }
        if (originalX % sum == 0) {
            return sum;
        } else {
            return -1;
        }
    
    }
};
