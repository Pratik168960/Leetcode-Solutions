// LeetCode Problem 3727_Maximum_Alternating_Sum_of_Squares
// Status: Accepted
// Language: C++


class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> sq;
        for (int x : nums) {
            sq.push_back((long long)x * x);
        }
        
        sort(sq.rbegin(), sq.rend());
        
        long long ans = 0;
        int mid = (sq.size() + 1) / 2;
        
        for (int i = 0; i < mid; i++) ans += sq[i];
        for (int i = mid; i < sq.size(); i++) ans -= sq[i];
        
        return ans;
    }
};
