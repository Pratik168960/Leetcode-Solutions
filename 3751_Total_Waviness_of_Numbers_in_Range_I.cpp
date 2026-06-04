// LeetCode Problem 3751_Total_Waviness_of_Numbers_in_Range_I
// Status: Accepted
// Language: C++

class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int total = 0;
        
        for (int i = num1; i <= num2; i++) {
            string s = to_string(i);
            
            for (int j = 1; j + 1 < s.size(); j++) {
                if (s[j] > s[j - 1] && s[j] > s[j + 1]) {
                    total++;
                }
                else if (s[j] < s[j - 1] && s[j] < s[j + 1]) {
                    total++;
                }
            }
        }
        
        return total;
    }
};
