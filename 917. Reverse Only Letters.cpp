//917. Reverse Only Letters

class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        string result, rev;
        int len = s.size(), low = 0, high = len-1, j=0;

        for(int i=len-1; i >= 0; i--)
        {
            if(isalpha(s[i]))
            {
                rev.push_back(s[i]);
            }
        }

        for(int i=0; i < len; i++)
        {
            if(isalpha(s[i]))
            {
                result.push_back(rev[j++]);
            }
            else
            {
                result.push_back(s[i]);
            }
        }

        return result;
    }
};