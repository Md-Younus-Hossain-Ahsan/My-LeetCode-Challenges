//48. Rotate Image

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int i, j;
        int dim = matrix.size();
         vector<vector<int>> matrix2(dim, vector<int>(dim));

        for(i=0; i < dim; i++)
        {
            for(j=0; j < dim; j++)
            {
                matrix2[i][j] = matrix[j][i];
            }
        }

        for(i=0; i < dim; i++)
        {
            for(j=0; j < dim; j++)
            {
                matrix[i][dim-j-1] = matrix2[i][j];
            }
        }
    }
};