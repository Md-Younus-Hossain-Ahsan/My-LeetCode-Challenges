//991. Broken Calculator

class Solution {
public:
    int brokenCalc(int startValue, int target) {
        
        int operations = 0;
        
        while (target > startValue) {
            if (target % 2 == 1) {
                target += 1; 
                operations++;
            }
            target /= 2; 
            operations++;
        }
        
        return operations + startValue - target;

    }
};