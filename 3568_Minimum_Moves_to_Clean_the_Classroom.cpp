// LeetCode Problem 3568_Minimum_Moves_to_Clean_the_Classroom
// Status: Accepted
// Language: C++


class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int m = classroom.size();
        int n = classroom[0].size();
        int sr = 0, sc = 0, L = 0;
        

        vector<vector<int>> l_idx(m, vector<int>(n, -1));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (classroom[i][j] == 'S') { sr = i; sc = j; }
                else if (classroom[i][j] == 'L') { l_idx[i][j] = L++; }
            }
        }
        
        int target_mask = (1 << L) - 1; 
        

        vector<vector<vector<int>>> vis(m, vector<vector<int>>(n, vector<int>(1 << L, -1)));
        

        queue<vector<int>> q;
        q.push({sr, sc, 0, energy, 0});
        vis[sr][sc][0] = energy;
        
        int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        while (!q.empty()) {
            auto curr = q.front(); 
            q.pop();
            
            int r = curr[0], c = curr[1], mask = curr[2], eng = curr[3], steps = curr[4];
            
            if (mask == target_mask) return steps;
            if (eng == 0) continue; 
            
            for (auto& d : dirs) {
                int nr = r + d[0], nc = c + d[1];
                
                if (nr >= 0 && nr < m && nc >= 0 && nc < n && classroom[nr][nc] != 'X') {
                    int nxt_eng = (classroom[nr][nc] == 'R') ? energy : eng - 1;
                    int nxt_mask = mask;
                    
                    if (classroom[nr][nc] == 'L') {
                        nxt_mask |= (1 << l_idx[nr][nc]);
                    }
                    
                    if (nxt_eng > vis[nr][nc][nxt_mask]) {
                        vis[nr][nc][nxt_mask] = nxt_eng;
                        q.push({nr, nc, nxt_mask, nxt_eng, steps + 1});
                    }
                }
            }
        }
        
        return -1;
    }
};
