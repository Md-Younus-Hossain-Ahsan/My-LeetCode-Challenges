//2582. Pass the Pillow

class Solution {
public:
    int passThePillow(int n, int time) {
        
        int cycleTime = 2 * (n - 1); 
        int completeCycles = time / cycleTime;        
        int remainingTime = time % cycleTime;
        int pillowPosition;
        
        if (remainingTime < n) 
            pillowPosition = remainingTime + 1;
        else 
            pillowPosition = 2 * n - remainingTime - 1;        
        
        return pillowPosition;
    }
};