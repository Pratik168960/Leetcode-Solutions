// LeetCode Problem 2515_Shortest_Distance_to_Target_String_in_a_Circular_Array
// Status: Accepted
// Language: C++

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int m = n; 
        
        for (int i = 0; i < n; ++i) {
            if (words[i] == target) {
                int d = abs(i - startIndex);
                m = min({m, d, n - d});
            }
        }
        
        return m == n ? -1 : m;
    }
};
