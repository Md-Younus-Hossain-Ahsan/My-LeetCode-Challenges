//2264. Largest 3-Same-Digit Number in String

class Solution {
public:
    string largestGoodInteger(string num) {
        
        string res;
        int max = -1;
        char prev1 = '@', prev2 = '@';
        
        for(char c : num)
        {
            if(prev1 == c && prev1 == prev2)
            {
                if(c - '0' > max)
                    max = c - '0';
            }
            
            prev2 = prev1;
            prev1 = c;
        }
        
        if(max != -1)
            res = to_string(max) + to_string(max) + to_string(max);
        
        return res;        
    }
};