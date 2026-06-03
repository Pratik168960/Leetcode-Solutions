// LeetCode Problem 3635_Earliest_Finish_Time_for_Land_and_Water_Rides_II
// Status: Accepted
// Language: C++

class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
        int ml = INT_MAX, mw = INT_MAX, r = INT_MAX;
        for (int i = 0; i < ls.size(); i++) ml = min(ml, ls[i] + ld[i]);
        for (int i = 0; i < ws.size(); i++) mw = min(mw, ws[i] + wd[i]);
        for (int i = 0; i < ws.size(); i++) r = min(r, max(ml, ws[i]) + wd[i]);
        for (int i = 0; i < ls.size(); i++) r = min(r, max(mw, ls[i]) + ld[i]);
        return r;
    }
};
