// LeetCode Problem 1674_Minimum_Moves_to_Make_Array_Complementary
// Status: Accepted
// Language: C++

class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<int> d(2 * limit + 2, 0);
        
        for (int i = 0; i < n / 2; ++i) {
            int a = min(nums[i], nums[n - 1 - i]);
            int b = max(nums[i], nums[n - 1 - i]);
            
            d[2] += 2;
            d[a + 1] -= 1;
            d[a + b] -= 1;
            d[a + b + 1] += 1;
            d[b + limit + 1] += 1;
        }
        
        int m = n;
        int c = 0;
        
        for (int i = 2; i <= 2 * limit; ++i) {
            c += d[i];
            m = min(m, c);
        }
        
        return m;
    }
};
