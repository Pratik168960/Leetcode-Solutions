// LeetCode Problem 3731_Find_Missing_Elements
// Status: Accepted
// Language: C++


class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> result;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 1; i++) {
            
            for(int missing = nums[i] + 1; missing < nums[i+1]; missing++) {
                result.push_back(missing);
            }
        }
        
        return result;
    }
};
