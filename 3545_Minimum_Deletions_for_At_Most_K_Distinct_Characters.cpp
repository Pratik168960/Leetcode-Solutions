// LeetCode Problem 3545_Minimum_Deletions_for_At_Most_K_Distinct_Characters
// Status: Accepted
// Language: C++

class Solution {
public:
    int minDeletion(string s, int k) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        vector<int> counts;
        for (int f : freq) {
            if (f > 0) {
                counts.push_back(f);
            }
        }
        
        if (counts.size() <= k) {
            return 0;
        }
        
        sort(counts.begin(), counts.end());
        
        int deletions = 0;
        int removeCount = counts.size() - k;
        
        for (int i = 0; i < removeCount; ++i) {
            deletions += counts[i];
        }
        
        return deletions;
    }
};
