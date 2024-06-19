//1332. Remove Palindromic Subsequences

class Solution {
public:
    int removePalindromeSub(string s) {
        
        int len = s.size();
        int low = 0, high = len-1;

        if(len == 0)
            return 0;

        while(low <= high)
        {
            if(s[low++] == s[high--])
                continue;

            return 2;
        }
        
        return 1;
    }
};