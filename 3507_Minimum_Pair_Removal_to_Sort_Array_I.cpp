// LeetCode Problem 3507_Minimum_Pair_Removal_to_Sort_Array_I
// Status: Accepted
// Language: C++

class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0 ;
        
        while (!is_sorted(nums.begin(), nums.end())) {

            int minSum = INT_MAX ;
            int idx = -1 ;
            
            for (int i = 0 ; i < nums.size() - 1 ; i++) {
                if (nums[i] + nums[i+1] < minSum) {
                    minSum = nums[i] + nums[i+1] ;
                    idx = i ;
                }
            }
            
            nums[idx] = minSum;
            nums.erase(nums.begin() + idx + 1);
            
            count++ ;
        }
    
    return count ;
    
    }
};
