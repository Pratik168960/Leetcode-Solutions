// LeetCode Problem 2351_First_Letter_to_Appear_Twice
// Status: Accepted
// Language: C++ 

class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> seen(26, false);
        
        for (char c : s) {
            int index = c - 'a';
            
            if (seen[index]) {
                return c;
            }
            seen[index] = true;
        }
        
        return ' ';        
    }
};
