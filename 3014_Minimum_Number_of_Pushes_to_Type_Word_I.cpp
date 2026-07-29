// LeetCode Problem 3014_Minimum_Number_of_Pushes_to_Type_Word_I
// Status: Accepted
// Language: C++

class Solution {
public:
    int minimumPushes(string word) {
        int r = 0;
        for (int i = 0; i < word.size(); i++) {
            r += (i / 8) + 1;
        }
        return r;
    }
};
