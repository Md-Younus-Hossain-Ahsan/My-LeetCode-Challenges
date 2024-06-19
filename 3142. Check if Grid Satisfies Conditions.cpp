//3142. Check if Grid Satisfies Conditions

class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();

        if (m == 1 && n == 1) 
            return true;
        if (m == 1) 
            return checkSingleRow(grid);
        if (n == 1) 
            return checkSingleCol(grid);

        return checkMultiDim(grid);        
    }
    
    bool checkSingleRow(vector<vector<int>>& grid) {
        
        for (int j = 0; j < grid[0].size() - 1; j++) 
        {
            if (grid[0][j] == grid[0][j + 1])
                return false;
        }
        
        return true;
    }

    bool checkSingleCol(vector<vector<int>>& grid) {
        
        for (int i = 0; i < grid.size() - 1; i++) 
        {
            if (grid[i][0] != grid[i + 1][0])
                return false;
        }     
        
        return true;
    }

    bool checkMultiDim(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        for (int i = 0; i < m - 1; i++) 
        {
            for (int j = 0; j < n - 1; j++) 
            {
                if (grid[i][j] != grid[i + 1][j] || grid[i][j] == grid[i][j + 1])
                    return false;
            }
            
            if (grid[i][n - 1] != grid[i + 1][n - 1])
                return false;
        }
        
        for (int j = 0; j < n - 1; j++) 
        {
            if (grid[m - 1][j] == grid[m - 1][j + 1])
                return false;
        }
        
        return true;
    }
};