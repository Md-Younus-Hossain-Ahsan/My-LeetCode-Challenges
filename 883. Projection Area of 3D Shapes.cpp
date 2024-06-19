//883. Projection Area of 3D Shapes

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {

        int n = grid.size();
        int xy = 0, xz = 0, yz = 0;
        
        for (int i = 0; i < n; ++i) {
            int max_row = 0, max_col = 0;
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] > 0) xy++;
                max_row = max(max_row, grid[i][j]);
                max_col = max(max_col, grid[j][i]);
            }
            xz += max_row;
            yz += max_col;
        }
        
        return xy + xz + yz;

    }
};