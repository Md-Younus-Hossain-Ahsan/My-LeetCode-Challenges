//1207. Unique Number of Occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        set<int> valueSet;
        unordered_map<int, int> mp;
        
        for(int i : arr)
        {
            mp[i]++;
        }
                        
        for (const auto& pair : mp) 
        {
            if (valueSet.find(pair.second) != valueSet.end()) 
                return false;
            
            valueSet.insert(pair.second);
        }
        
        return true;
    }
};