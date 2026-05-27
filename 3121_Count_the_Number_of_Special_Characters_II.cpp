// LeetCode Problem 3121_Count_the_Number_of_Special_Characters_II
// Status: Accepted
// Language: C++

class Solution {
public:
    int numberOfSpecialChars(string word) {
        int l[26] = {}, u[26] = {}, r = 0;
        
        for (int i = 0; i < word.size(); ++i) {
            if (word[i] >= 'a') l[word[i] - 'a'] = i + 1;
            else if (!u[word[i] - 'A']) u[word[i] - 'A'] = i + 1;
        }
        
        for (int i = 0; i < 26; ++i) {
            r += (l[i] && u[i] && l[i] < u[i]);
        }
        
        return r;
    }
};
