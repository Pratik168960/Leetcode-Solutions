// LeetCode Problem 2904_Shortest_and_Lexicographically_Smallest_Beautiful_String
// Status: Accepted
// Language: C++


class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string best = "";
        int left = 0;
        int count = 0; 
        

        for (int right = 0; right < s.length(); ++right) {
        
            if (s[right] == '1') {
                count++;
            }
            
        
            while (count > k || (count == k && s[left] == '0')) {
        
                if (s[left] == '1') {
                    count--;
                }
        
                left++;
            }
            
        
            if (count == k) {
                string current = s.substr(left, right - left + 1);
                
                if (best == "" || current.length() < best.length() || 
                   (current.length() == best.length() && current < best)) {
                    best = current;
                }
            }
        }
        
        return best;
    
    
    }
};
