// LeetCode Problem 2815_Max_Pair_Sum_in_an_Array
// Status: Accepted
// Language: C++

class Solution {
public:
    int maxSum(vector<int>& nums) {
        
        unordered_map<int, int> m ;
        int ans = -1 ;
        
        for (int x : nums) {

            int d = 0, t = x ;
            while (t > 0) {
                d = max(d, t % 10) ;
                t /= 10 ;
            }
            
            if (m.count(d)) {
                ans = max(ans, x + m[d]) ;
            }
            
            m[d] = max(m[d], x) ;
        }
        
        return ans ;

    }
};
