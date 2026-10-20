// LeetCode Problem 3886_Sum_of_Sortable_Integers
// Status: Accepted
// Language: C++



class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size(), r = 0;
        vector<int> s = nums;
        sort(s.begin(), s.end());
        
        auto ok = [&](int k) {
            for (int i = 0; i < n; i += k) {
                int d = 0, di = -1;
                for (int j = i; j < i + k - 1; ++j) {
                    if (nums[j] > nums[j + 1]) {
                        d++;
                        di = j;
                    }
                }
                
                if (d > 1 || (d == 1 && nums[i + k - 1] > nums[i])) return false;
                
                if (d == 0) {
                    for (int j = 0; j < k; ++j) {
                        if (nums[i + j] != s[i + j]) return false;
                    }
                } else {
                    int l1 = i + k - 1 - di, l2 = di - i + 1;
                    for (int j = 0; j < l1; ++j) {
                        if (nums[di + 1 + j] != s[i + j]) return false;
                    }
                    for (int j = 0; j < l2; ++j) {
                        if (nums[i + j] != s[i + l1 + j]) return false;
                    }
                }
            }
            return true;
        };
        
        for (int k = 1; k * k <= n; ++k) {
            if (n % k == 0) {
                if (ok(k)) r += k;
                if (k * k != n && ok(n / k)) r += n / k;
            }
        }
        
        return r;
    }
};
