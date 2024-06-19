//125. Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {

        string processed;
        int j = 0;

        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) { 
                processed += tolower(s[i]); 
                j++;
            }
        }

        for (int i = 0; i < j / 2; i++) {
            if (processed[i] != processed[j - i - 1]) {
                return false;
            }
        }

        return true;
    }
};