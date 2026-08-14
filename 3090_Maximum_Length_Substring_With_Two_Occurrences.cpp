// LeetCode Problem 3090_Maximum_Length_Substring_With_Two_Occurrences
// Status: Accepted
// Language: C++

class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> freq;
        int left = 0;
        int max_len = 0;
        for(int right = 0; right < s.length(); right++){
            freq[s[right]]++;

            while(freq[s[right]] > 2){
                freq[s[left]]--;
                left++;
            }

            max_len = max(max_len, (abs(left-right)+1));

        }


        return max_len;
    }
    
};
