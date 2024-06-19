//392. Is Subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int slen = s.size();
        int tlen = t.size();
        int j = 0;

        for(int i=0; i < tlen; i++)
        {
            if(s[j] == t[i])
                j++;
            if(j == slen)
                return true;
        }

        if(j < slen)
            return false;
        
        return true;
    }
};