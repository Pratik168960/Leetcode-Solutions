// LeetCode Problem 868_Binary_Gap
// Status: Accepted
// Language: C++ 

class Solution {
public:
    int binaryGap(int n) {
        int ans = 0 ;
        int last = -1 ;
        int pos = 0 ;
        
        while (n > 0) {
            if (n % 2 == 1) {
                
                if (last != -1) {
                    int gap = pos - last ;
                    if (gap > ans) {
                        ans = gap ;
                    }
                }
                
                last = pos ;
            }
            
            n = n / 2 ;
            pos = pos + 1 ;
        }
        
        return ans ;
    }
};
