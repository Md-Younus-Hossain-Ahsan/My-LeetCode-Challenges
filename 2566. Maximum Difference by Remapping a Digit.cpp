//2566. Maximum Difference by Remapping a Digit

class Solution {
public:
    int minMaxDifference(int num) {
        
        int n1 = 0, n2 = 0;
        string s = to_string(num);
        int c1 = s[0] - '0', c2 = s[0] - '0';  
        
        for(char c : s)
        {
            if(c2 != 9)
                break;
            
            c2 = c - '0';
        }
        
        for(char c : s)
        {
            if(c - '0' == c1)
               n1 = n1 * 10 + 0;
            else
                n1 = n1 * 10 + c - '0';
            
            if(c - '0' == c2)
                n2 = n2 * 10 + 9;
            else
                n2 = n2 * 10 + c - '0';
        }
        
        return abs(n1 - n2);
    }
};