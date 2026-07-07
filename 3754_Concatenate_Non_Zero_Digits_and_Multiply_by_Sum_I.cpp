// LeetCode Problem 3754_Concatenate_Non_Zero_Digits_and_Multiply_by_Sum_I
// Status: Accepted
// Language: C++

class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string a = "" ;
        long long sum = 0;
        for ( int i = 0; i < s.length(); i++){
            if (s[i] != '0'){
                a.push_back(s[i]) ; 
                sum = sum + s[i] - '0'; 
            }
        }
        if(a.empty()){
            return 0 ; 
        }
        
        long long x = stoi(a);
        return x * sum ; 
    }
};

