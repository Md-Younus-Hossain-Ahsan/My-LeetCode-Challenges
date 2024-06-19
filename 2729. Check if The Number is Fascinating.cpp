//2729. Check if The Number is Fascinating

class Solution {
public:
    bool isFascinating(int n) {
        
        unordered_map<char, int> mp; 
        string s = to_string(n) + to_string(2 * n) + to_string(3 * n);
        
        for(char c : s)
        {
            mp[c]++;
            
            if(mp[c] > 1 || c == '0')
                return false;
        }
        
        return true;
    }
};