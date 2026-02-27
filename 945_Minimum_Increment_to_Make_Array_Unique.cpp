// LeetCode Problem 945_Minimum_Increment_to_Make_Array_Unique
// Status: Accepted
// Language: C++ 

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        sort(v.begin(), v.end()) ;
        
        int ans = 0 ;
        
        for (int i = 1 ; i < v.size() ; i++) {
            if (v[i] <= v[i - 1]) {
                ans += v[i - 1] - v[i] + 1 ;
                v[i] = v[i - 1] + 1 ;
            }
        }
        
        return ans ;
    }
};
