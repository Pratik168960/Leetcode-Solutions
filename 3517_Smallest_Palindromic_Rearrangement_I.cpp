// LeetCode Problem 3517_Smallest_Palindromic_Rearrangement_I
// Status: Accepted
// Language: C++

class Solution {
public:
    string smallestPalindrome(string s) {
        int c[26] = {};
        for (char x : s) c[x - 'a']++;
        string l, m;
        for (int i = 0; i < 26; ++i) {
            l += string(c[i] / 2, i + 'a');
            if (c[i] % 2) m = i + 'a';
        }
        return l + m + string(l.rbegin(), l.rend());
    }
};
