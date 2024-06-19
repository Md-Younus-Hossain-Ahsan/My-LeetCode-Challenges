//1941. Check if All Characters Have Equal Number of Occurrences

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        unordered_map<char, int> charCount;
        
        for(char c : s)
        {
            charCount[c]++;
        }
        
        for(const auto& check : charCount)
        {
            if(check.second != charCount[s[0]])
                return false;
        }
        
        return true;        
    }
};