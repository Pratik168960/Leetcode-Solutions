// LeetCode Problem 1545_Find_Kth_Bit_in_Nth_Binary_String
// Status: Accepted
// Language: C++

class Solution {
public:
    char findKthBit(int n, int k) {
        if (n == 1) return '0';
        
        int len = pow(2, n) - 1 ; 
        int mid = len / 2 + 1 ;
        
        if (k == mid) return '1' ;
        if (k < mid) return findKthBit(n - 1, k) ;
        
        return findKthBit(n - 1, len - k + 1) == '0' ? '1' : '0' ;

    }
};
