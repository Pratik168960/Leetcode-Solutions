// LeetCode Problem 3660_Jump_Game_IX
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int s = nums.size();
        vector<int> sm(s), a(s);
        sm[s-1] = nums[s-1];
        
        for (int i = s - 2; i >= 0; --i) {
            sm[i] = min(nums[i], sm[i+1]);
        }
        
        int pm = 0, st = 0;
        for (int i = 0; i < s; ++i) {
            pm = max(pm, nums[i]);
            if (i == s - 1 || pm <= sm[i+1]) {
                for (int j = st; j <= i; ++j) {
                    a[j] = pm;
                }
                st = i + 1;
            }
        }
        
        return a;
    }
};
