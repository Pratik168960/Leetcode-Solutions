// LeetCode Problem 2657_Find_the_Prefix_Common_Array_of_Two_Arrays
// Status: Accepted
// Language: C++ 

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size(), c = 0;
        vector<int> r(n), f(55, 0);
        
        for (int i = 0; i < n; i++) {
            if (++f[A[i]] == 2) c++;
            if (++f[B[i]] == 2) c++;
            r[i] = c;
        }
        
        return r;
    }
};
