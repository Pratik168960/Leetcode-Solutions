// LeetCode Problem 3296_Minimum_Number_of_Seconds_to_Make_Mountain_Height_Zero
// Status: Accepted
// Language: C++

class Solution {
public:
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        priority_queue<array<long long, 3>, vector<array<long long, 3>>, greater<>> pq;
        
        for (long long w : workerTimes) {
            pq.push({w, w, 2});
        }
        
        long long a = 0;
        
        while (mountainHeight--) {
            auto t = pq.top();
            pq.pop();
            
            a = max(a, t[0]);
            pq.push({t[0] + t[1] * t[2], t[1], t[2] + 1});
        }
        
        return a;
    }
};
