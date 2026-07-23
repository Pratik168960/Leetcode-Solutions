// LeetCode Problem 3513_Number_of_Unique_XOR_Triplets_I
// Status: Accepted
// Language: C++

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        
        if (n < 3) return n;
        
        int limit = 1;
        while (limit <= n) {
            limit *= 2; 
        }
        
        return limit;
    }
};
