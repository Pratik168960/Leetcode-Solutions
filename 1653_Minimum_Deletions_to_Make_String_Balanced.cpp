// LeetCode Problem 1653_Minimum_Deletions_to_Make_String_Balanced
// Status: Accepted
// Language: C++


class Solution {
public:
    int minimumDeletions(string s) {
        int del = 0 ;
        int b_count = 0 ;

        for (char c : s) {
            if (c == 'b') {
                b_count++ ;
            } else {

                if (b_count > 0) {
                    del++ ;
                    b_count-- ;
                }
            }
        }
        
        return del ;        
    }
};
