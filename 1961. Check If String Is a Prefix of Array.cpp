//1961. Check If String Is a Prefix of Array

class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        int s_len = s.size();
        int words_len = 0;
        string res;
        
        for(string x : words)
        {
            res += x;
            words_len += x.size();
            
            if(words_len >= s_len)
                break;
        }
        
        return s == res;        
    }
};