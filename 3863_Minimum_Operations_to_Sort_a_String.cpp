// LeetCode Problem 3863_Minimum_Operations_to_Sort_a_String
// Status: Accepted
// Language: C++



class Solution {
public:
    int minOperations(string s) {
        int n = s.size(), k = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] < s[i - 1]) k = 0;
        }
        if (k) return 0;
        if (n == 2) return -1;
        
        char a = *min_element(s.begin(), s.end());
        char b = *max_element(s.begin(), s.end());
        
        if (s[0] == a || s[n - 1] == b) return 1;
        
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == a || s[i] == b) return 2;
        }
        
        return 3;
    }
};
