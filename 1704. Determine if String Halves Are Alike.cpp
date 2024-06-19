//1704. Determine if String Halves Are Alike

class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int vowels = 0;
        int len = s.size();
        
        for(int i=0; i < len; i++)
        {
            if(i < len/2)
            {
                if(isVowel(s[i]))
                    vowels++;
            }
            else
            {
                if(isVowel(s[i]))
                    vowels--;
            }
        }
        
        return vowels == 0;        
    }
    
    bool isVowel(char c)
    {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};