//2373. Largest Local Values in a Matrix

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {

        int n = grid.size();
        vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2, 0));

        for (int i = 1; i < n - 1; ++i) 
        {
            for (int j = 1; j < n - 1; ++j) 
            {
                maxLocal[i - 1][j - 1] = findMaxSubmatrix(grid, i, j);
            }
        }

        return maxLocal;
    }

private:
    int findMaxSubmatrix(const vector<vector<int>>& grid, int row, int col) {
        int maxVal = grid[row - 1][col - 1];
        for (int i = row - 1; i <= row + 1; ++i) {
            for (int j = col - 1; j <= col + 1; ++j) {
                maxVal = max(maxVal, grid[i][j]);
            }
        }
        return maxVal;
    }
};