// LeetCode Problem 3713_Longest_Balanced_Substring_I
// Status: Accepted
// Language: C++

class Solution {
public:
    int longestBalanced(string s) {
        int n = s.length();
        int maxLen = 0;

        for (int i = 0; i < n; ++i) {
            vector<int> count(26, 0);
            int distinct = 0;
            int maxFreq = 0;

            for (int j = i; j < n; ++j) {
                int charIdx = s[j] - 'a';
                
                if (count[charIdx] == 0) {
                    distinct++;
                }
                
                count[charIdx]++;
                maxFreq = max(maxFreq, count[charIdx]);
                
                int currentLen = j - i + 1;

                if (maxFreq * distinct == currentLen) {
                    maxLen = max(maxLen, currentLen);
                }
            }
        }
        
        return maxLen;
    }
};
