//2651. Calculate Delayed Arrival Time

class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        
        int ultimateTime = arrivalTime + delayedTime;
        
        return ultimateTime < 24 ? ultimateTime : ultimateTime - 24;
	}
};