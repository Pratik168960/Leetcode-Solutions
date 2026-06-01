// LeetCode Problem 2144_Minimum_Cost_of_Buying_Candies_With_Discount
// Status: Accepted
// Language: C++

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int min_cost = 0; 
        
        sort(cost.rbegin(), cost.rend()); 
        
        for (int i = 0; i < cost.size(); i++) {
            if ((i + 1) % 3 != 0) {
                min_cost += cost[i]; 
            }
        }
        
        return min_cost;
    }
};
