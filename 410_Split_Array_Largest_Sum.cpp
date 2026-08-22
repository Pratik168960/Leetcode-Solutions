// LeetCode Problem 410_Split_Array_Largest_Sum
// Status: Accepted
// Language: C++

class Solution {
public:
    bool isPossible(vector<int>& nums, int n, int k, int mid ){
        int subarr = 1 ;
        long long int sum = 0;


        for(int i = 0; i < n; i++){
            if(sum + nums[i] <= mid ){
                sum += nums[i];
            }else {
                subarr++;
                if(subarr > k || nums[i] > mid){
                    return false;
                }
                sum = nums[i];
            }
        }

        return true;


    }

    int splitArray(vector<int>& nums, int k) {
        int s = 0, n = nums.size();
        long long int sum = 0;

        for(int i = 0; i < n; i++){
            sum += nums[i];
        }
        int e = sum;

        int ans = 0;
        
        while(s <= e){
            int mid = s + (e-s) / 2;
            if (isPossible(nums, n, k, mid)){
                ans = mid ;
                e = mid - 1 ;
            } else {
                s = mid + 1 ;
            }
        }
        return ans ;

    }
};
