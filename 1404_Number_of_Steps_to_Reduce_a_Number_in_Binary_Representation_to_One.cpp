// LeetCode Problem 1404_Number_of_Steps_to_Reduce_a_Number_in_Binary_Representation_to_One
// Status: Accepted
// Language: C++

class Solution {
public:
    int numSteps(string s) {

        int steps = 0 ;
        int c = 0 ;
        
        for (int i = s.length() - 1 ; i > 0 ; i--) {
            int bit = (s[i] - '0') + c ; 
            
            if (bit == 1) {
                steps = steps + 2 ; 
                c = 1 ;
            } 
            else {
                steps = steps + 1 ; 
            }
        }
        
        return steps + c ;
    }
};
