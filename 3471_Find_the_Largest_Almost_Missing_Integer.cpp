// LeetCode Problem 3471_Find_the_Largest_Almost_Missing_Integer
// Status: Accepted
// Language: C++

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        int n = nums.size();
        
        for (int i = 0; i <= n - k; ++i) {
            unordered_set<int> seen;
            for (int j = i; j < i + k; ++j) {
                seen.insert(nums[j]);
            }
            for (int val : seen) {
                counts[val]++;
            }
        }
        
        int ans = -1;
        for (auto& pair : counts) {
            if (pair.second == 1) {
                ans = max(ans, pair.first);
            }
        }
        
        return ans;
    }
};
