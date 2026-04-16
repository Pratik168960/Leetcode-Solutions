// LeetCode Problem 3488_Closest_Equal_Element_Queries
// Status: Accepted
// Language: C++ 

class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        unordered_map<int, vector<int>> indices;
        
        for (int i = 0; i < n; ++i) {
            indices[nums[i]].push_back(i);
        }
        
        vector<int> minDist(n, -1);
        
        for (auto& [val, pos] : indices) {
            int k = pos.size();
            if (k < 2) continue; 
            
            for (int i = 0; i < k; ++i) {
                int prev_idx = pos[(i - 1 + k) % k];
                int next_idx = pos[(i + 1) % k];
                
                int dist1 = min(abs(pos[i] - prev_idx), n - abs(pos[i] - prev_idx));
                int dist2 = min(abs(pos[i] - next_idx), n - abs(pos[i] - next_idx));
                
                minDist[pos[i]] = min(dist1, dist2);
            }
        }
        
        vector<int> ans;
        ans.reserve(queries.size());
        for (int q : queries) {
            ans.push_back(minDist[q]);
        }
        
        return ans;
    }
};
