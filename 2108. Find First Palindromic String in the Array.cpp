//2108. Find First Palindromic String in the Array

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        int isPalindrome;

        for(int i=0; i < words.size(); i++)
        {
            isPalindrome = 0;
            isPalindrome = PalindromeCheck(words[i]);

            if(isPalindrome)
                return words[i];
        }

        return "";
    }

    int PalindromeCheck(string s)
    {
        int len = s.size();
        for(int i=0; i < len/2; i++)
        {
            if(s[i] != s[len-i-1])
                return 0;
        }

        return 1;
    }
};