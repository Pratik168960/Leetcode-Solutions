// LeetCode Problem 2089_Find_Target_Indices_After_Sorting_Array
// Status: Accepted
// Language: C++



class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int c = 0, e = 0;
        for (int x : nums) {
            if (x < target) c++;
            else if (x == target) e++;
        }
        
        vector<int> r;
        while (e--) r.push_back(c++);
        return r;
    }
};
