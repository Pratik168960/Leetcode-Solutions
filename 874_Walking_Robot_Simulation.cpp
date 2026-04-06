// LeetCode Problem 874_Walking_Robot_Simulation
// Status: Accepted
// Language: C++ 

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int, int>> s;
        for (auto& v : obstacles) s.insert({v[0], v[1]});
        
        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};
        int x = 0, y = 0, d = 0, r = 0;
        
        for (int k : commands) {
            if (k == -1) d = (d + 1) % 4;
            else if (k == -2) d = (d + 3) % 4;
            else {
                while (k--) {
                    if (s.count({x + dx[d], y + dy[d]})) break;
                    x += dx[d];
                    y += dy[d];
                    r = max(r, x * x + y * y);
                }
            }
        }
        return r;
    }
}; 

