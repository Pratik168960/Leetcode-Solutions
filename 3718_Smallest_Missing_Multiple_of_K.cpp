// LeetCode Problem 3718_Smallest_Missing_Multiple_of_K
// Status: Accepted
// Language: C++

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> seen(nums.begin(), nums.end());
        
        int multiple = k;
        
        while (seen.count(multiple)) {
            multiple += k;
        }
        
        return multiple;
    }
};
