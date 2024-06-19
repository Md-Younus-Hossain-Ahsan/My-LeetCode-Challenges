//2124. Check if All A's Appears Before All B's

class Solution {
public:
    bool checkString(string s) {
        
        int isit_b = 0;
        
        for(char c : s)
        {
            if(c == 'b')
                isit_b = 1;
            
            if(c == 'a' && isit_b == 1)
                return false;
        }
        
        return true;        
    }
};