// LeetCode Problem 1306_Jump_Game_III
// Status: Accepted
// Language: C++

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if (start < 0 || start >= arr.size() || arr[start] < 0) return false;
        if (arr[start] == 0) return true;
        int v = arr[start];
        arr[start] = -1;
        return canReach(arr, start + v) || canReach(arr, start - v);
    }
};
