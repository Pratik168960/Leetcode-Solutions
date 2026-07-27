// LeetCode Problem 1464_Maximum_Product_of_Two_Elements_in_an_Array
// Status: Accepted
// Language: C++

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a = 0, b = 0;
        for (int x : nums) {
            if (x > a) b = a, a = x;
            else if (x > b) b = x;
        }
        return (a - 1) * (b - 1);
    }
};
