// LeetCode Problem 1689_Partitioning_Into_Minimum_Number_Of_Deci_Binary_Numbers
// Status: Accepted
// Language: C++

class Solution {
public:
    int minPartitions(string n) {

        char res = '0' ;
        
        for (char c : n) {
            if (c > res) res = c;
        }

        return res - '0' ;
    }
};
