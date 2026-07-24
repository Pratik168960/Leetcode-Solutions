// LeetCode Problem 3514_Number_of_Unique_XOR_Triplets_II
// Status: Accepted
// Language: C++

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        bool v[2048] = {0}, p[2048] = {0}, a[2048] = {0};
        vector<int> u;
        
        for (int x : nums) {
            if (!v[x]) {
                v[x] = 1;
                u.push_back(x);
            }
        }
        
        for (int x : u)
            for (int y : u)
                p[x ^ y] = 1;
                
        for (int i = 0; i < 2048; i++)
            if (p[i])
                for (int x : u)
                    a[i ^ x] = 1;
                    
        int c = 0;
        for (int i = 0; i < 2048; i++)
            if (a[i]) c++;
            
        return c;
    }
};
