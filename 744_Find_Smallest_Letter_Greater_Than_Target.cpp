// LeetCode Problem 744_Find_Smallest_Letter_Greater_Than_Target
// Status: Accepted
// Language: C++

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for ( char c : letters ){
            if ( c > target ){
                return c ;
            }
        }
        return letters[0]; 
    }
};
