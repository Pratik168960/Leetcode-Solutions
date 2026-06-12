// LeetCode Problem 1588_Sum_of_All_Odd_Length_Subarrays
// Status: Accepted
// Language: C++

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int r = 0, n = arr.size();
        for (int i = 0; i < n; i++) {
            r += (((i + 1) * (n - i) + 1) / 2) * arr[i];
        }
        return r;
    }
};
