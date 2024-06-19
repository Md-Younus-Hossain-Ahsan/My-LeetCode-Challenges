//2027. Minimum Moves to Convert String

class Solution {
public:
    int minimumMoves(string s) {
        
        int res=0;
        
        for(int i=0; i < s.size(); i++)
        {
            if(s[i] == 'O')
            {
                continue;    
            }
            else
            {
                res++;
                i += 2;
            }
        }
        
        return res;        
    }
};