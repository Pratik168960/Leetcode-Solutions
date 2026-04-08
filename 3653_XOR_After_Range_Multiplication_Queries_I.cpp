// LeetCode Problem 3653_XOR_After_Range_Multiplication_Queries_I
// Status: Accepted
// Language: C++ 

class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        long long m = 1000000007;
        
        for (auto& q : queries) {
            for (int i = q[0]; i <= q[1]; i += q[2]) {
                nums[i] = (1LL * nums[i] * q[3]) % m;
            }
        }
        
        int ans = 0;
        for (int x : nums) {
            ans ^= x;
        }
        
        return ans;
    }
};
