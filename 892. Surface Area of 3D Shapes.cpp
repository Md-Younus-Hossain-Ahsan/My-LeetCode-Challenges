//892. Surface Area of 3D Shapes

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int totalArea = 0;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] > 0) {
                    totalArea += 2 + 4 * grid[i][j]; 
                }
            }
        }
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i < n - 1) {
                    totalArea -= min(grid[i][j], grid[i + 1][j]) * 2; 
                }
                if (j < n - 1) {
                    totalArea -= min(grid[i][j], grid[i][j + 1]) * 2; 
                }
            }
        }
        
        return totalArea;
    }
};