// LeetCode Problem 1758_Minimum_Changes_To_Make_Alternating_Binary_String
// Status: Accepted
// Language: C++

class Solution {
public:
    int minOperations(string s) {
        int countA = 0 ; 

        for ( int i = 0 ; i < s.length() ; i++ ){
            
            if ( i % 2 == 0 ){
                if ( s[i] != '0' ){
                    countA++ ; 
                }
            }else {
                if ( s[i] != '1'){
                    countA++ ;
                } 
            }
        }

        int countB = s.length() - countA ;

        return min(countA, countB ) ; 
    }
};
