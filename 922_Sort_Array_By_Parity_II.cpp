// LeetCode Problem 922_Sort_Array_By_Parity_II
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0, j = 1;
        while(i < nums.size() && j < nums.size()){
            if(nums[i]%2 == 0){
                i = i + 2;
            } else {
                if(nums[j]%2 != 0){
                    j = j + 2;
                } else {
                    swap(nums[i],nums[j]);
                    i = i + 2;
                    j = j + 2;
                }
            }
        }
        return nums;
    }
};
