// LeetCode Problem 1288_Remove_Covered_Intervals
// Status: Accepted
// Language: C++

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int count = n ;
        for (int j = 0; j < n; j++){
            for(int i = 0; i < n; i++){
                if(intervals[i][0] <= intervals[j][0] && intervals[i][1] >= intervals[j][1]&& (i != j)){
                    count--;
                    break;
                }
            }
        }
        
        return count;
    }
};
