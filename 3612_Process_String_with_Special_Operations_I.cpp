// LeetCode Problem 3612_Process_String_with_Special_Operations_I
// Status: Accepted
// Language: C++

class Solution {
public:
    string processStr(string s) {
        string result = "";
        
        for (char c : s) {
            if (c == '*') {
                if (!result.empty()) {
                    result.pop_back();
                }
            } else if (c == '#') {
                result += result;
            } else if (c == '%') {
                reverse(result.begin(), result.end());
            } else {
                result.push_back(c);
            }
        }
        
        return result;
    }
};
