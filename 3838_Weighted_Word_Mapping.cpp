// LeetCode Problem 3838_Weighted_Word_Mapping
// Status: Accepted
// Language: C++

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res;
        for (string& w : words) {
            int sum = 0;
            for (char c : w) sum += weights[c - 'a'];
            res += 'z' - (sum % 26);
        }
        return res;
    }
};
