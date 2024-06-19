//766. Toeplitz Matrix

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int m = matrix.size(), n = matrix[0].size();
        
        for (int j = 0; j < n; ++j) 
        {
            int val = matrix[0][j];
            for (int i = 1, k = j + 1; i < m && k < n; ++i, ++k) 
            {
                if (matrix[i][k] != val) 
                    return false;
            }
        }
        
        for (int i = 1; i < m; ++i) 
        {
            int val = matrix[i][0];
            for (int j = 1, k = i + 1; j < n && k < m; ++j, ++k) 
            {
                if (matrix[k][j] != val) 
                    return false;
            }
        }
        
        return true;
    }
};