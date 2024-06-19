//2697. Lexicographically Smallest Palindrome

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        
        int len = s.size();

        for(int i=0; i < len; i++)
        {
            if(s[i] != s[len-1-i])
            {
                if((int) s[i] < (int) s[len-1-i])
                    s[len-1-i] = s[i];
                else
                    s[i] = s[len-1-i];
            }
        }

        return s;
    }
};