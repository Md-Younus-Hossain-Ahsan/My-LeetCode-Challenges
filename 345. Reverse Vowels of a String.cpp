//345. Reverse Vowels of a String

class Solution {
public:
    string reverseVowels(string s) {
        
        int len = s.size(), j=0;
        string vowels;

        for(int i=len-1; i >= 0; i--)
        {
            if(Is_Vowel(s[i]))
                vowels += s[i];
        }
        
        j=0;
        for(int i=0; i < len; i++)
        {
            if(Is_Vowel(s[i]))
                s[i] = vowels[j++];
        }

        return s;
    }

    bool Is_Vowel(char c)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
            
        return false;
    }
};