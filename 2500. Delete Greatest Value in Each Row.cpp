//2500. Delete Greatest Value in Each Row

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        
        int sum = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        
        for(int i=0; i < rows; i++)
        {
            sort(grid[i].begin(), grid[i].end()); 
        }
        
        for(int j=cols-1; j >= 0; j--)
        {
            int max = INT_MIN;
            for(int i=0; i < rows; i++)
            {
                if(grid[i][j] > max)
                    max = grid[i][j];
            }
            sum += max;
        }
        
        return sum;
    }
};