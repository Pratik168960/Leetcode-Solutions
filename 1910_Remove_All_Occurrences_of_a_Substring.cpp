// LeetCode Problem 1910_Remove_All_Occurrences_of_a_Substring
// Status: Accepted
// Language: C++ 

class Solution {
public:
    string removeOccurrences(string s, string p) {
        int i;
        while ((i = s.find(p)) != -1) {
            s.erase(i, p.size());
        }
        return s;
    }
};
