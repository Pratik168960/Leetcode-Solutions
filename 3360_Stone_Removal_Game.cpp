// LeetCode Problem 3360_Stone_Removal_Game
// Status: Accepted
// Language: C++


class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10 ;
        bool aliceTurn = true ;

        while (n >= remove) {
            n -= remove ;          // remove stones
            remove--;             // next move removes 1 less
            aliceTurn = !aliceTurn; // switch turn
        }

        // If Bob cannot move, Alice wins
        // If Alice cannot move, Alice loses
        return !aliceTurn;
    }
};

