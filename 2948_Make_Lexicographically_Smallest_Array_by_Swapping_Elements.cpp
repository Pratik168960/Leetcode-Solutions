// LeetCode Problem 2948_Make_Lexicographically_Smallest_Array_by_Swapping_Elements
// Status: Accepted
// Language: C++


class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<pair<int, int>> pairs(n);
        

        for (int i = 0; i < n; ++i) {
            pairs[i] = {nums[i], i};
        }
        

        sort(pairs.begin(), pairs.end());
        

        vector<int> result(n);
        int i = 0;
        

        while (i < n) {
            int j = i + 1;
            vector<int> indices = {pairs[i].second};
            

            while (j < n && pairs[j].first - pairs[j - 1].first <= limit) {
                indices.push_back(pairs[j].second);
                j++;
            }
            

            sort(indices.begin(), indices.end());
            

            for (int k = 0; k < indices.size(); ++k) {
                result[indices[k]] = pairs[i + k].first;
            }
            
            i = j; 
        }
        
        return result;
    }
};
