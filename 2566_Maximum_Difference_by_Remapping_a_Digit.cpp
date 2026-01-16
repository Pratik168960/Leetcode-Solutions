// LeetCode Problem 2566_Maximum_Difference_by_Remapping_a_Digit
// Status: Accepted
// Language: C++


class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string maxVal = s;
        string minVal = s;

        for (char c : s) {
            if (c != '9') {
                replace(maxVal.begin(), maxVal.end(), c, '9');
                break;
            }
        }

        replace(minVal.begin(), minVal.end(), s[0], '0');

        return stoi(maxVal) - stoi(minVal);
    }
};
