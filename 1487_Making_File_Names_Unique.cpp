// LeetCode Problem 1487_Making_File_Names_Unique
// Status: Accepted
// Language: C++

class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        unordered_map<string, int> m;
        vector<string> ans;
        
        for (const auto& name : names) {
            if (m.count(name)) {
                int k = m[name];
                string newName = name + "(" + to_string(k) + ")";
                
                while (m.count(newName)) {
                    k++;
                    newName = name + "(" + to_string(k) + ")";
                }
                
                m[name] = k + 1; 
                m[newName] = 1;  
                ans.push_back(newName);
            } 
            else {
                m[name] = 1;
                ans.push_back(name);
            }
        }
        
        return ans;
    }
};
