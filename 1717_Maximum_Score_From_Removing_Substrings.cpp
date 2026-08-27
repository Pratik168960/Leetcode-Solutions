// LeetCode Problem 1717_Maximum_Score_From_Removing_Substrings
// Status: Accepted
// Language: C++ 


class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int total_score = 0;
        

        char first_c = (x > y) ? 'a' : 'b';
        char second_c = (x > y) ? 'b' : 'a';
        int first_score = max(x, y);
        int second_score = min(x, y);
        

        string stack1;
        for (char c : s) {

            if (!stack1.empty() && stack1.back() == first_c && c == second_c) {
                stack1.pop_back();
                total_score += first_score;
            } else {
                stack1.push_back(c);
            }
            
        }
        

        string stack2;
        for (char c : stack1) {

            if (!stack2.empty() && stack2.back() == second_c && c == first_c) {
                stack2.pop_back();
                total_score += second_score;
            } else {
                stack2.push_back(c);
            }

        }
        
        return total_score;
    }
};
