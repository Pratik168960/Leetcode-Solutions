// LeetCode Problem 3275_K_th_Nearest_Obstacle_Queries
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        multiset<long long> ms;
        vector<int> results;
        
        for (const auto& q : queries) {
            long long dist = abs(q[0]) + abs(q[1]);
            ms.insert(dist);
            
            if (ms.size() > k) {
                ms.erase(prev(ms.end()));
            }
            
            if (ms.size() == k) {
                results.push_back(*ms.rbegin());
            } else {
                results.push_back(-1);
            }
        }
        
        return results;
    }
};
