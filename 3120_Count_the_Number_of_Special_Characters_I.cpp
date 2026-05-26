// LeetCode Problem 3120_Count_the_Number_of_Special_Characters_I
// Status: Accepted
// Language: C++

class Solution {
public:
    int numberOfSpecialChars(string word) {
        int a[128] = {0}, c = 0;
        
        for (char w : word) a[w] = 1;
        
        for (int i = 'a'; i <= 'z'; i++) {
            c += (a[i] && a[i - 32]); 
        }
        
        return c;
    }
};
