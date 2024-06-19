//867. Transpose Matrix

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();        
        vector<vector<int>> trans_matrix(cols, vector<int>(rows));

        for (int i=0; i < rows; i++) 
        {
            for (int j=0; j < cols; j++) 
            {
                trans_matrix[j][i] = matrix[i][j];
            }
        }

        return trans_matrix;
    }
};