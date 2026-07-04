// LeetCode Problem 2492_Minimum_Score_of_a_Path_Between_Two_Cities
// Status: Accepted
// Language: C++

class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> graph(n + 1);
        for (const auto& road : roads) {
            graph[road[0]].push_back({road[1], road[2]});
            graph[road[1]].push_back({road[0], road[2]});
        }

        queue<int> q;
        vector<bool> visited(n + 1, false);
        
        q.push(1);
        visited[1] = true;
        
        int ans = INT_MAX;

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            for (auto& [nextCity, dist] : graph[curr]) {
                ans = min(ans, dist);

                if (!visited[nextCity]) {
                    visited[nextCity] = true;
                    q.push(nextCity);
                }
            }
        }

        return ans;
    }
};
