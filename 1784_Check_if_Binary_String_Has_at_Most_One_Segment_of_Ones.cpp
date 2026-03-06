// LeetCode Problem 1784_Check_if_Binary_String_Has_at_Most_One_Segment_of_Ones
// Status: Accepted
// Language: C++

class Solution {
public:
    bool checkOnesSegment(string s) {
        for ( int i = 0 ; i < s.length() - 1 ; i++ ){
            if ( s[i] == '0' && s[i+1] == '1' ){
                return false ;
            } 
        }

    return true ; 
    }
};
