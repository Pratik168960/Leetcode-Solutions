// LeetCode Problem 1344_Angle_Between_Hands_of_a_Clock
// Status: Accepted
// Language: C++

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double diff = abs((hour % 12 * 30.0 + minutes * 0.5) - (minutes * 6.0));
        return min(diff, 360.0 - diff);
    }
};
