// LeetCode Problem 556_Next_Greater_Element_III
// Status: Accepted
// Language: C++ 

class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        
        bool ok = next_permutation(s.begin(), s.end()) ;
        
        if (!ok) {
            return -1 ;
        }
        
        long long ans = stoll(s) ;
        
        if (ans > INT_MAX) {
            return -1 ;
        }
        
        return ans ;
    }
};
