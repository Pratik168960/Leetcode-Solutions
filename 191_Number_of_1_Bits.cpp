// LeetCode Problem 191_Number_of_1_Bits
// Status: Accepted
// Language: C++

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0 ;
        while(n != 0){
            if (n&1){
                count++;
            }
            n = n >> 1 ;
        }
        return count ;
    }
};
