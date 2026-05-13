// LeetCode Problem 3411_Maximum_Subarray_With_Equal_Products
// Status: Accepted
// Language: C++

class Solution {
public:
    int maxLength(vector<int>& nums) {
        int r = 0, n = nums.size();
        
        auto gc = [](long long a, long long b) {
            while (b) {
                long long t = b;
                b = a % b;
                a = t;
            }
            return a;
        };
        
        for (int i = 0; i < n; i++) {
            long long p = 1, l = 1, g = nums[i];
            
            for (int j = i; j < n; j++) {
                p *= nums[j];
                
                if (p > 25200) break; 
                
                g = gc(g, nums[j]);
                l = (l / gc(l, nums[j])) * nums[j];
                
                if (p == l * g) {
                    if (j - i + 1 > r) {
                        r = j - i + 1;
                    }
                }
            }
        }
        
        return r;
    }
};
