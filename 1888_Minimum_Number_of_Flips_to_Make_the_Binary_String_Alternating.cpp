// LeetCode Problem 1888_Minimum_Number_of_Flips_to_Make_the_Binary_String_Alternating
// Status: Accepted
// Language: C++

class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        string s2 = s + s;
        int ans = INT_MAX;
        int a = 0;
        int b = 0;
        
        for (int i = 0; i < s2.length(); i++) {
            if (s2[i] - '0' != i % 2) a++;
            if (s2[i] - '0' != (i + 1) % 2) b++;
            
            if (i >= n) {
                if (s2[i - n] - '0' != (i - n) % 2) a--;
                if (s2[i - n] - '0' != (i - n + 1) % 2) b--;
            }
            
            if (i >= n - 1) {
                ans = min({ans, a, b});
            }
        }
        
        return ans;
    }
};
