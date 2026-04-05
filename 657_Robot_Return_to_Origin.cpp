// LeetCode Problem 657_Robot_Return_to_Origin
// Status: Accepted
// Language: C++

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (char m : moves) {
            if (m == 'U') y++;
            else if (m == 'D') y--;
            else if (m == 'R') x++;
            else if (m == 'L') x--;
        }
        return x == 0 && y == 0;
    }
};

