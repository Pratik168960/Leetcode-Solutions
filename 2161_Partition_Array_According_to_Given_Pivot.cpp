// LeetCode Problem 2161_Partition_Array_According_to_Given_Pivot
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smallerThanPivot;
        vector<int> equalToPivot;
        vector<int> largerThanPivot;
        for (int i = 0 ; i < nums.size() ; i++){
            if (nums[i] < pivot){
                smallerThanPivot.push_back(nums[i]);
            } else if (nums[i] == pivot){
                equalToPivot.push_back(nums[i]); 
            } else {
                largerThanPivot.push_back(nums[i]);
            }
        }
        
        vector<int> result; 
        result.insert(result.end(), smallerThanPivot.begin(), smallerThanPivot.end());        
        result.insert(result.end(), equalToPivot.begin(), equalToPivot.end());
        result.insert(result.end(), largerThanPivot.begin(), largerThanPivot.end());
        
        return result;
    }
};


OR 


class Solution {
public:
    vector<int> pivotArray(vector<int>& n, int p) {
        vector<int> r;
        for (int x : n) if (x < p) r.push_back(x);
        for (int x : n) if (x == p) r.push_back(x);
        for (int x : n) if (x > p) r.push_back(x);
        return r;
    }
};


OR 


// two pointer 

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int arraySize = nums.size(), l = 0, r = arraySize - 1;
        vector<int> result(arraySize, pivot);

        for (int i = 0, j = arraySize - 1; i < arraySize; i++, j--) {
            if (nums[i] < pivot) result[l++] = nums[i];
            if (nums[j] > pivot) result[r--] = nums[j];
        }
        
        return result;
    }
};
