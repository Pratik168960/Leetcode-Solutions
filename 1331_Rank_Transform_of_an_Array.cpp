// LeetCode Problem 1331_Rank_Transform_of_an_Array
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> uniqueNums(arr.begin(), arr.end());
        
        unordered_map<int, int> rankMap;
        int currentRank = 1;
        for (int num : uniqueNums) {
            rankMap[num] = currentRank++;
        }
        
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = rankMap[arr[i]];
        }
        
        return arr;   
    }
};
