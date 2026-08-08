// LeetCode Problem 3302_Find_the_Lexicographically_Smallest_Valid_Sequence
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        
        vector<int> suf(m + 1, -1);
        suf[m] = n; 
        

        for (int i = n - 1, j = m - 1; i >= 0 && j >= 0; i--) {
            if (word1[i] == word2[j]) {
                suf[j] = i;
                j--;
            }
        }

        vector<int> ans;
        bool changed = false;
        

        for (int i = 0, j = 0; i < n && j < m; i++) {
            
            if (word1[i] == word2[j]) {
                ans.push_back(i);
                j++;
            } 

            else if (!changed && suf[j + 1] > i) {
                changed = true;
                ans.push_back(i);
                j++;
            }
        }

        return ans.size() == m ? ans : vector<int>();
    }
};
