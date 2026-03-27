// LeetCode Problem 2946_Matrix_Similarity_After_Cyclic_Shifts
// Status: Accepted
// Language: C++ 

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int c = mat[0].size();
        k %= c;
        for (int i = 0; i < mat.size(); ++i) {
            for (int j = 0; j < c; ++j) {
                if (mat[i][j] != mat[i][(j + k) % c]) {
                    return false;
                }
            }
        }
        return true;
    }
};
