//2103. Rings and Rods

class Solution {
public:
    int countPoints(string rings) {
        
        int j, res=0, found[10][3] = {0};
        
        for(int i=0; i < rings.size(); i+=2)
        {
            if(rings[i] == 'R')
            {
                j = rings[i+1] - '0';
                found[j][0]++;
            }
            if(rings[i] == 'G')
            {
                j = rings[i+1] - '0';
                found[j][1]++;
            }
            if(rings[i] == 'B')
            {
                j = rings[i+1] - '0';
                found[j][2]++;
            }
        }
        
        for(int i=0; i < 10; i++)
        {
            if(found[i][0] && found[i][1] && found[i][2])
                res++;            
        }
        
        return res;        
    }
};