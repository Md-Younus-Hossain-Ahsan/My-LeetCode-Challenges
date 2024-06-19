//2586. Count the Number of Vowel Strings in Range

class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        
        int count = 0;
        
        for(int i=left; i <= right; i++)
        {
            if(isVowelString(words[i]))
                count++;
        }
        
        return count;        
    }
    
    bool isVowelString(string s)
    {
        return isVowel(s[0]) && isVowel(s[s.size()-1]);
    }
    
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};