//939. Minimum Area Rectangle

class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        
        unordered_set<int> pointSet;
        int minArea = INT_MAX;
        
        for (auto& point : points) 
        {
            pointSet.insert(point[0] * 40001 + point[1]);
        }
        
        for (int i = 0; i < points.size(); ++i) 
        {
            for (int j = i + 1; j < points.size(); ++j) 
            {
                int x1 = points[i][0], y1 = points[i][1];
                int x2 = points[j][0], y2 = points[j][1];
                
                if (x1 == x2 || y1 == y2) continue;
                
                if (pointSet.count(x1 * 40001 + y2) && pointSet.count(x2 * 40001 + y1)) {
                    minArea = min(minArea, abs(x2 - x1) * abs(y2 - y1));
                }
            }
        }
        
        return minArea == INT_MAX ? 0 : minArea;

    }
};