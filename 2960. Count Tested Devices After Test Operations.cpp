//2960. Count Tested Devices After Test Operations

class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        
        int tested = 0;

        for(int i=0; i < batteryPercentages.size(); i++)
        {
            if(batteryPercentages[i] - tested > 0)
                tested++;
        }

        return tested;
    }
};