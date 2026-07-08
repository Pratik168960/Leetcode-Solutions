// LeetCode Problem 3767_Maximize_Points_After_Choosing_K_Tasks
// Status: Accepted
// Language: C++

class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        int n = technique1.size();
        vector<int> diff(n);
        long long maxPoints = 0;
        
        for (int i = 0; i < n; i++) {
            maxPoints += technique2[i];
            diff[i] = technique1[i] - technique2[i];
        }
        
        sort(diff.rbegin(), diff.rend());
        
        for (int i = 0; i < n; i++) {
            if (i < k || diff[i] > 0) {
                maxPoints += diff[i];
            } else {
                break;
            }
        }
        
        return maxPoints;
    }
};
