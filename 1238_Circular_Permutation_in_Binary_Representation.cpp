// LeetCode Problem 1238_Circular_Permutation_in_Binary_Representation
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        int size = 1 << n; 
        vector<int> res(size);
        
        for (int i = 0; i < size; i++) {
            res[i] = (i ^ (i >> 1)) ^ start;
        }
        
        return res;
    }
};
