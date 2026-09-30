// LeetCode Problem 1111_Maximum_Nesting_Depth_of_Two_Valid_Parentheses_Strings
// Status: Accepted
// Language: C++


class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans(seq.length());
        int depth = 0;
        

        for (int i = 0; i < seq.length(); i++) {
            
            if (seq[i] == '(') {

                ans[i] = depth % 2;
            
                depth++;
            
            } else {

                depth--;
                ans[i] = depth % 2;
            }
        }
        
        return ans;
    }
};
