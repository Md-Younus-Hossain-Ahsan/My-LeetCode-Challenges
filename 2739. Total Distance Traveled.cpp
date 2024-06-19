//2739. Total Distance Traveled

class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        
        int traveled = 0;
        
        while(mainTank != 0)
        {
            if(mainTank >= 5 && additionalTank != 0)
            {
                traveled += 50;
                additionalTank--;
                mainTank = mainTank - 5 + 1;
            }
            else
            {
                traveled += mainTank * 10;
                mainTank = 0;
            }            
        }
        
        return traveled;  
    }
};