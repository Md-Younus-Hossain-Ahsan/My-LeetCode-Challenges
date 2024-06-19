//1252. Cells with Odd Values in a Matrix

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        vector<vector<int>> matrix(m, vector<int>(n, 0));
        
        for (const auto& index : indices) 
        {
            int ri = index[0];
            int ci = index[1];
            for (int j = 0; j < n; ++j) 
            {
                matrix[ri][j]++;
            }
            for (int i = 0; i < m; ++i) 
            {
                matrix[i][ci]++;
            }
        }
        
        int count = 0;
        for (const auto& row : matrix) 
        {
            for (int val : row) {
                if (val % 2 != 0) {
                    count++;
                }
            }
        }
        
        return count;

    }
};