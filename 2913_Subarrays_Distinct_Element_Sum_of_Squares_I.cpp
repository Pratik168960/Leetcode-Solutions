// LeetCode Problem 2913_Subarrays_Distinct_Element_Sum_of_Squares_I
// Status: Accepted
// Language: C++


class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            unordered_set<int> a;
            

            for (int j = i; j < n; j++) {
                a.insert(nums[j]);
                
                int count = a.size();
                sum += (count * count);
            }
        }
        
        return sum;
    }
};
