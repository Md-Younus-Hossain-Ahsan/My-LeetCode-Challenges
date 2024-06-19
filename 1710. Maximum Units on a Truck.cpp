//1710. Maximum Units on a Truck

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) 
        {
            return a[1] > b[1]; 
        });
        
        int i = 0;
        int maxUnits = 0;
        
        while(truckSize > 0 && i < boxTypes.size())
        {
            if(boxTypes[i][0] <= truckSize)
            {
                truckSize -= boxTypes[i][0];
                maxUnits += boxTypes[i][0] * boxTypes[i][1];
            }
            else
            {
                maxUnits += truckSize * boxTypes[i][1];
                truckSize = 0;
            }
            i++;
        }
        
        return maxUnits;        
    }
};