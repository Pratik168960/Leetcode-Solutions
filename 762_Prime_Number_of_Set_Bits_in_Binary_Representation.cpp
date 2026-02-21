// LeetCode Problem 762_Prime_Number_of_Set_Bits_in_Binary_Representation
// Status: Accepted
// Language: C++ 

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count = 0 ;

        for (int i = left ; i <= right ; i++) {
            
            int temp = i ;
            int setBits = 0 ;
            
            while (temp > 0) {
                if (temp % 2 == 1) { 
                    setBits++ ;
                }
                temp = temp / 2 ;
            }

            bool isPrime = false ;
            if (setBits == 2 || setBits == 3 || setBits == 5 || setBits == 7 || 
                setBits == 11 || setBits == 13 || setBits == 17 || setBits == 19) {
                isPrime = true ;
            }
            
            if (isPrime) {
                count++ ;
            }
        } 
        
        return count ;
    }
};
