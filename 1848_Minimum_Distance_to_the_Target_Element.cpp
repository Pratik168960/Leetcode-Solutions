// LeetCode Problem 1848_Minimum_Distance_to_the_Target_Element
// Status: Accepted
// Language: C++

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int r = INT_MAX;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] == target) {
                r = min(r, abs(i - start));
            }
        }
        return r;
    }
};
