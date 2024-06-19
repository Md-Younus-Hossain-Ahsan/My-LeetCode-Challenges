//2710. Remove Trailing Zeros From a String

class Solution {
public:
    string removeTrailingZeros(string num) {
        
        int len = num.size();
        int n = num[len - 1] - '0';
        int i = len - 1, j;
        
        while(n == 0)
        {
            i--;
            n = num[i] - '0';
        }
        
        string s = "";        
        for(j = 0; j <= i; j++)
        {
            s += num[j];
        }
        
        return s;
    }
};