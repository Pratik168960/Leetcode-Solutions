// LeetCode Problem 1009_Complement_of_Base_10_Integer
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> r;
        for (auto& q : queries) {
            for (auto& d : dictionary) {
                int c = 0;
                for (int i = 0; i < q.size(); ++i) {
                    if (q[i] != d[i]) {
                        c++;
                    }
                }
                if (c <= 2) {
                    r.push_back(q);
                    break;
                }
            }
        }
        return r;
    }
};
