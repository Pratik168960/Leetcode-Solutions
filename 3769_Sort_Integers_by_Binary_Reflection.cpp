// LeetCode Problem 3769_Sort_Integers_by_Binary_Reflection
// Status: Accepted
// Language: C++

class Solution {
public:
    int getRefl(int n) {

        int ref = 0;
        
        while (n > 0) {
            ref = ref << 1;
            ref = ref | (n & 1);
            n = n >> 1;
        }
        
        return ref ;
    }

    vector<int> sortByReflection(vector<int>& nums) {
    
        sort(nums.begin(), nums.end(), [&](int a, int b) {
    
            int refA = getRefl(a) ;
            int refB = getRefl(b) ;
            
            if (refA != refB) {
                return refA < refB ;
            }
            
            return a < b ;
        });
        
        return nums ;
    }
};
