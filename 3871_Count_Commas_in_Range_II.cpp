// LeetCode Problem 3871_Count_Commas_in_Range_II
// Status: Accepted
// Language: C++

class Solution {
public:
    long long countCommas(long long n) {
        long long commas = 0;
        
        for (long long t = 1000; n >= t; t *= 1000) {
            commas += n - t + 1;
        }
        
        return commas;
    }
};
