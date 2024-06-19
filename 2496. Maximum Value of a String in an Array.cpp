//2496. Maximum Value of a String in an Array

class Solution {
public:
    int maximumValue(vector<string>& strs) {
        
        int value = 0, max_value = INT_MIN;
        
        for(string s : strs)
        {
            if(isthereChar(s))
                value = s.size();
            else
                value = stoi(s);
            
            if(max_value < value)
                max_value = value;
        }
        
        return max_value;
    }
    
    bool isthereChar(string s) {
        
        for(char c : s)
        {
            if(isalpha(c))
                return true;
        }
        
        return false;
    }
};