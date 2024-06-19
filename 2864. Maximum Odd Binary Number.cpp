//2864. Maximum Odd Binary Number

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int len = s.size();
        int i, ones = 0, zeros = 0;
        string res = "";
        
        for(char c : s)
        {
            if(c == '1')
                ones++;
            else
                zeros++;
        }
        
        while(ones != 1)
        {
            res += "1";
            ones--;
        }
        
        while(zeros != 0)
        {
            res += "0";
            zeros--;
        }        
        res += "1";
        
        return res;
    }
};