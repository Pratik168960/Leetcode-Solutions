// LeetCode Problem 2078_Two_Furthest_Houses_With_Different_Colors
// Status: Accepted
// Language: C++

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size() ;
        int max_dist = INT_MIN ; 
 
        for(int i = 0 ; i < n ; i++ ){
            for ( int j = i + 1 ; j < n ; j++ ){
                if (colors[i] != colors[j]){
                    int diff = abs(i-j) ; 
                    max_dist = max(diff, max_dist) ; 
                }
                
            }
        }
        return max_dist ; 
    }
};
