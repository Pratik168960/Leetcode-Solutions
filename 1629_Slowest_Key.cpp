// LeetCode Problem 1629_Slowest_Key
// Status: Accepted
// Language: C++

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int maxDuration = releaseTimes[0];
        char bestKey = keysPressed[0];
        
        for (int i = 1; i < releaseTimes.size(); ++i) {
            int currentDuration = releaseTimes[i] - releaseTimes[i-1];
            
            if (currentDuration > maxDuration) {
                maxDuration = currentDuration;
                bestKey = keysPressed[i];
            }
            else if (currentDuration == maxDuration) {
                if (keysPressed[i] > bestKey) {
                    bestKey = keysPressed[i];
                }
            }
        }
        
        return bestKey;
    }
};
