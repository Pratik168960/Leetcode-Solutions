// LeetCode Problem 2537_Count_the_Number_of_Good_Subarrays
// Status: Accepted
// Language: C++ 

class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long r = 0, p = 0;
        unordered_map<int, int> m;
        int n = nums.size(), i = 0;
        
        for (int j = 0; j < n; j++) {
            p += m[nums[j]]++;
            while (p >= k) {
                r += n - j;
                p -= --m[nums[i++]];
            }
        }
        
        return r;
    }
};
