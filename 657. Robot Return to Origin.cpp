//657. Robot Return to Origin

class Solution {
public:
    bool judgeCircle(string moves) {
        
        int vertical = 0, horizontal = 0;
        
        for(char m : moves)
        {
            if(m == 'U')
                vertical++;
            if(m == 'D')
                vertical--;
            if(m == 'L')
                horizontal++;
            if(m == 'R')
                horizontal--; 
        }
        
        return vertical == 0 && horizontal == 0;   
    }
};