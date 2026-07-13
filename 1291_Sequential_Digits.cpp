// LeetCode Problem 1291_Sequential_Digits
// Status: Accepted
// Language: C++


class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> result;
        
        for (int len = 2; len <= 9; ++len) {
            
            for (int i = 0; i <= 9 - len; ++i) {
                string sub = s.substr(i, len);
                int num = stoi(sub); 
                
                if (num >= low && num <= high) {
                    result.push_back(num);
                }
            }
        }
        
        return result;
    }
};
