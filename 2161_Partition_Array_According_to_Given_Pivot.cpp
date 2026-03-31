// LeetCode Problem 2161_Partition_Array_According_to_Given_Pivot
// Status: Accepted
// Language: C++ 

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res;
        for (int x : nums) if (x < pivot ) res.push_back(x);
        for (int x : nums) if (x == pivot) res.push_back(x);
        for (int x : nums) if (x > pivot) res.push_back(x);
        return res;
    }
};
