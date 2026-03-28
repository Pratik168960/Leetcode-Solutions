// LeetCode Problem 2918_Minimum_Equal_Sum_of_Two_Arrays_After_Replacing_Zeros
// Status: Accepted
// Language: C++

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long s1 = 0, s2 = 0;
        int z1 = 0, z2 = 0;
        
        for (int x : nums1) {
            s1 += x;
            if (!x) z1++;
        }
        for (int x : nums2) {
            s2 += x;
            if (!x) z2++;
        }
        
        long long m1 = s1 + z1;
        long long m2 = s2 + z2;
        
        if (m1 < m2 && !z1) return -1;
        if (m2 < m1 && !z2) return -1;
        
        return std::max(m1, m2);
    }
};

