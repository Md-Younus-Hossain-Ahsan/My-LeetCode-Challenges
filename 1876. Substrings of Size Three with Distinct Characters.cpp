//1876. Substrings of Size Three with Distinct Characters

class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int count = 0;
        int len = s.size();
        
        for(int i=2; i < len; i++)
        {
            if(s[i-2] != s[i-1] && s[i-1] != s[i] && s[i-2] != s[i])
                count++;
        }
        
        return count;        
    }
};