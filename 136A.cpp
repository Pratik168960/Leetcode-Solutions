// Codeforces Problem 136A
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    vector<int> result(n + 1);
 
    for (int giver = 1; giver <= n; giver++) {
        int receiver;
        cin >> receiver;
        
        result[receiver] = giver;
    }
 
    for (int i = 1; i <= n; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
