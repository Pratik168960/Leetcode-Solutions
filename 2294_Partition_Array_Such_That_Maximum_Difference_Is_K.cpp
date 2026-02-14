// LeetCode Problem 2294_Partition_Array_Such_That_Maximum_Difference_Is_K
// Status: Accepted
// Language: C++ 

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count = 1 ; 
        int min = nums[0];

        for (int i = 1 ; i < nums.size() ; i++){
            if ( nums[i] - min > k ){
                count++ ; 
                min = nums[i] ; 
            }
        }
        return count ; 
    }
};
