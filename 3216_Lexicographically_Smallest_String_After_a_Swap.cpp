class Solution {
public:
    string getSmallestString(string s) {
        int n = s.size() ;
      
        // Checking each adjacent pair
        for ( int i = 0 ; i < n - 1 ; i++ ) {
          // Converting char digits to int
            int a = s[i] - '0' ;
            int b = s[i + 1] - '0' 
          /*
            Conditions for swapping:
            1) Both digits must have the same parity
                → both even or both odd
            2) Swapping should reduce lexicographical order
                → right digit is smaller than left digit
          */
            if ( ( a % 2 == b % 2 ) && s[i + 1] < s[i] ) {
                swap(s[i], s[i + 1]) ;
                break ;
            }
        }
        
        return s ;
    }
};
