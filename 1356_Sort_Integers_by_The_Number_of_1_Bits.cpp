// LeetCode Problem 1356_Sort_Integers_by_The_Number_of_1_Bits
// Status: Accepted
// Language: C++ 

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b) {
            int n1 = __builtin_popcount(a) ;
            int n2 = __builtin_popcount(b) ;
            
            if (n1 == n2) {
                return a < b ;
            }
            return n1 < n2 ;
        }) ;
        
        return arr ;

        
    }
};
