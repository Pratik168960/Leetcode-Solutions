// LeetCode Problem 1855_Maximum_Distance_Between_a_Pair_of_Values
// Status: Accepted
// Language: C++

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int max_dist = 0;
        
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] <= nums2[j]) {
                max_dist = max(max_dist, j - i);
                j++;
            } 
            else {
                i++;
            }
        }
        
        return max_dist;
    }
};
