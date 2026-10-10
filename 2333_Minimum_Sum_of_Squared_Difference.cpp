// LeetCode Problem 2333_Minimum_Sum_of_Squared_Difference
// Status: Accepted
// Language: C++


class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long k = (long long)k1 + k2;
        vector<long long> count(100001, 0);
        
        for (int i = 0; i < nums1.size(); i++) {
            count[abs(nums1[i] - nums2[i])]++;
        }
        
        for (int i = 100000; i > 0 && k > 0; i--) {
            if (count[i] > 0) {
                long long ops = min(k, count[i]);
                count[i] -= ops;
                count[i - 1] += ops;
                k -= ops;
            }
        }
        
        long long ans = 0;

        for (long long i = 1; i <= 100000; i++) {
            if (count[i] > 0) {
                ans += count[i] * i * i;
            }
        }
        
        
        return ans;
    }
};
