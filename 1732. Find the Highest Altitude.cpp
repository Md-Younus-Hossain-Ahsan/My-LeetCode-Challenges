//1732. Find the Highest Altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int highestAltitude = 0;
        int currentAltitude = 0;

        for (int gainValue : gain) 
        {
            currentAltitude += gainValue;
            highestAltitude = max(highestAltitude, currentAltitude);
        }

        return highestAltitude;

    }
};