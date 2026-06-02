// LeetCode Problem 3633_Earliest_Finish_Time_for_Land_and_Water_Rides_I
// Status: Accepted
// Language: C++

class Solution {
public:
    int earliestFinishTime(vector<int>& lS, vector<int>& lD, vector<int>& wS, vector<int>& wD) {
        int r = INT_MAX;
        for (int i = 0; i < lS.size(); ++i) {
            for (int j = 0; j < wS.size(); ++j) {
                r = min({r, max(lS[i] + lD[i], wS[j]) + wD[j], max(wS[j] + wD[j], lS[i]) + lD[i]});
            }
        }
        return r;
    }
};
