//1232. Check If It Is a Straight Line

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

        if (coordinates.size() <= 2) 
            return true;
            
        double slope = calculateSlope(coordinates[0], coordinates[1]);

        for (int i = 2; i < coordinates.size(); ++i) {
            
            double new_slope = calculateSlope(coordinates[i-1], coordinates[i]);
            
            if (new_slope != slope)
                return false;
        }

        return true; 
    }

private:
    double calculateSlope(vector<int>& p1, vector<int>& p2) {
        if (p2[0] == p1[0]) 
            return INT_MAX; 
        return static_cast<double>(p2[1] - p1[1]) / (p2[0] - p1[0]);
    }
};