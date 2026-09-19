// LeetCode Problem 1401_Circle_and_Rectangle_Overlapping
// Status: Accepted
// Language: C++


class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int x = max(x1, min(xCenter, x2));
        int y = max(y1, min(yCenter, y2));
        
     
        return (x - xCenter) * (x - xCenter) + (y - yCenter) * (y - yCenter) <= radius * radius;
    }
};
