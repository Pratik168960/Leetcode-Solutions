// LeetCode Problem 1200_Minimum_Absolute_Difference
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end()) ;
        vector<vector<int>> result ;
        int minDiff = INT_MAX ;
        
        for (int i = 0 ; i < arr.size() - 1 ; ++i) {
            int currentDiff = arr[i+1] - arr[i] ;
            
            if (currentDiff < minDiff) {
                minDiff = currentDiff ;
                result.clear() ;
                result.push_back({arr[i], arr[i+1]}) ;
            }
            else if (currentDiff == minDiff) {
                result.push_back({arr[i], arr[i+1]}) ;
            }
        }
        
        return result ;
    }
};
