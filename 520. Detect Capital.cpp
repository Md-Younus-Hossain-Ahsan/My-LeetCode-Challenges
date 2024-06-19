//520. Detect Capital

class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int lowerCase = 0;
        int upperCase = 0;
        
        for(char c : word)
        {
            if(isupper(c))
               upperCase++;
            else
               lowerCase++;
        }
        
        return lowerCase == word.size() || upperCase == word.size() || (isupper(word[0]) && lowerCase == word.size()-1);
    }
};