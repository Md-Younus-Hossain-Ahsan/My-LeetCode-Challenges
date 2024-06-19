//2319. Check if Matrix Is X-Matrix

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        
        int dim = grid.size();
        
        for(int i=0; i < dim; i++)
        {
            for(int j=0; j < dim; j++)
            {
                if(isDiagonal(i, j, dim) && grid[i][j] == 0)
                    return false;
                else if(!isDiagonal(i, j, dim) && grid[i][j] != 0)
                    return false;
            }
        }
        
        return true;      
    }
    
    bool isDiagonal(int i, int j, int dim) {
        
        if(i == j)
            return true;
        
        return j == dim-1-i;        
    }
};

