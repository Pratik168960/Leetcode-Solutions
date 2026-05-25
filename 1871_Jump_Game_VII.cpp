// LeetCode Problem 1871_Jump_Game_VII
// Status: Accepted
// Language: C++

class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.size(), c = 0;
        vector<bool> d(n, 0);
        d[0] = 1;
        
        for (int i = 1; i < n; i++) {
            if (i >= minJump) c += d[i - minJump];
            if (i > maxJump) c -= d[i - maxJump - 1];
            d[i] = c > 0 && s[i] == '0';
        }
        
        return d.back();
    }
};
