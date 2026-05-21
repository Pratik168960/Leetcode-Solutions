// LeetCode Problem 3043_Find_the_Length_of_the_Longest_Common_Prefix
// Status: Accepted
// Language: C++

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> s;
        for (int x : arr1) {
            while (x > 0) {
                s.insert(x);
                x /= 10;
            }
        }
        
        int m = 0;
        for (int y : arr2) {
            while (y > 0) {
                if (s.count(y)) {
                    m = max(m, (int)to_string(y).length());
                    break;
                }
                y /= 10;
            }
        }
        
        return m;
    }
};
