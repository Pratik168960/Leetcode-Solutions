// LeetCode Problem 866_Prime_Palindrome
// Status: Accepted
// Language: C++

class Solution {
public:

    bool isPrime(int num) {
        if (num < 2) return false ;
        if (num == 2 || num == 3) return true ;
        if (num % 2 == 0 || num % 3 == 0) return false ;
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) return false ;
        }
        return true ;
    }

    int primePalindrome(int n) {

        if (8 <= n && n <= 11) return 11 ;


        for (int i = 1; i < 100000; i++) {
            string s = to_string(i) ;
            string r = s ;
            reverse(r.begin(), r.end()) ;
            
            int pal = stoi(s + r.substr(1)) ;
            
            if (pal >= n && isPrime(pal)) {
                return pal ;
            }
        }
        return -1 ;
    }
};
