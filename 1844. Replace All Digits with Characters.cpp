//1844. Replace All Digits with Characters

class Solution {
public:
    string replaceDigits(string s) {
        
        for(int i=1; i < s.size(); i+=2)
        {
            int j = s[i] - '0';
            s[i] = s[i-1] + j;
        }
        
        return s;
    }
};