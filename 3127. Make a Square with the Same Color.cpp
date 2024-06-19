//3127. Make a Square with the Same Color

class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        
        int i, j, w=0, b=0;

        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                if(grid[i][j] == 'W')
                    w++;
                else
                    b++;
            }
        }
        if(w <= 1 || b <= 1)
            return true;
            
        w=0;
        b=0;
        for(i=0; i<2; i++)
        {
            for(j=1; j<=2; j++)
            {
                if(grid[i][j] == 'W')
                    w++;
                else
                    b++;
            }
        }
        if(w <= 1 || b <= 1)
            return true;
            
        w=0;
        b=0;
        for(i=1; i<=2; i++)
        {
            for(j=0; j<2; j++)
            {
                if(grid[i][j] == 'W')
                    w++;
                else
                    b++;
            }
        }
        if(w <= 1 || b <= 1)
            return true;
            
        w=0;
        b=0;
        for(i=1; i<=2; i++)
        {
            for(j=1; j<=2; j++)
            {
                if(grid[i][j] == 'W')
                    w++;
                else
                    b++;
            }
        }
        if(w <= 1 || b <= 1)
            return true;
            
        return false;

    }
};