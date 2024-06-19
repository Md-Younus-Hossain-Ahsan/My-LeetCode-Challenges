//1351. Count Negative Numbers in a Sorted Matrix

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int neg_nums=0;

        for(int i=0; i < grid.size(); i++)
        {
            for(int j=0; j < grid[0].size(); j++)
            {
                if(grid[i][j] < 0)
                    neg_nums++;
            }
        }

        return neg_nums;
    }
};