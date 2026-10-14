// LeetCode Problem 3723_Maximize_Sum_of_Squares_of_Digits
// Status: Accepted
// Language: C++


class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) {
            return "";
        }
        
        string ans(num, '0');
        for (int i = 0; i < num; i++) {
            int d = min(9, sum);
            ans[i] = '0' + d;
            sum -= d;
        }
        
        return ans;
    }
};
