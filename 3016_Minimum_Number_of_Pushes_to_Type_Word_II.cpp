// LeetCode Problem 3016_Minimum_Number_of_Pushes_to_Type_Word_II
// Status: Accepted
// Language: C++

class Solution {
public:
    int minimumPushes(string word) {
        vector<int> f(26, 0);
        for (char c : word) f[c - 'a']++;
        sort(f.rbegin(), f.rend());
        
        int r = 0;
        for (int i = 0; i < 26; i++) {
            r += f[i] * (i / 8 + 1);
        }
        return r;
    }
};
