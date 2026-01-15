// LeetCode Problem 3740_Minimum_Distance_Between_Three_Equal_Elements
// Status: Accepted
// Language: C++


class Solution {
public:
    int minimumDistance(vector<int>& nums) {

        unordered_map<int, vector<int>> indices ;
        int minD = INT_MAX ;
        
        for (int i = 0 ; i < nums.size(); i++) {

            int val = nums[i] ;
            
            indices[val].push_back(i) ;
            
            int k = indices[val].size() ;
            if (k >= 3) {
            
                int first = indices[val][k-3] ;
                int current = i ;
                
                int currentDist = (current - first) * 2 ;
                
                if (currentDist < minD) {
                    minD = currentDist ;
                }
            }
        }
        
        if (minD == INT_MAX) {
            return -1 ;
        } 
        else {
            return minD ;
        }          
    }


};

