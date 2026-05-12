// LeetCode Problem 1665_Minimum_Initial_Energy_to_Finish_Tasks
// Status: Accepted
// Language: C++ 

class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(), [](auto& a, auto& b) {
            return (a[1] - a[0]) > (b[1] - b[0]);
        });
        
        int r = 0, c = 0;
        for (auto& t : tasks) {
            if (c < t[1]) {
                r += t[1] - c;
                c = t[1];
            }
            c -= t[0];
        }
        
        return r;
    }
};
