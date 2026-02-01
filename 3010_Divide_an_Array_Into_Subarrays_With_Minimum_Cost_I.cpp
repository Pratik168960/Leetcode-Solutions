// LeetCode Problem 3010_Divide_an_Array_Into_Subarrays_With_Minimum_Cost_I
// Status: Accepted
// Language: C++


class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size() ;
        int res = nums[0] ;
        

        sort(nums.begin() + 1, nums.end()) ;
        
        res += nums[1] + nums[2] ;
        
        return res ;
    }
};
