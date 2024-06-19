//2643. Row With Maximum Ones

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        int nums_of_1s=0, row_index=0, temp;

        for(int i=0; i < mat.size(); i++)
        {
            temp = 0;
            for(int j=0; j < mat[0].size(); j++)
            {
                if(mat[i][j] == 1)
                    temp++;
            }
            if(temp > nums_of_1s)
            {
                nums_of_1s = temp;
                row_index = i;
            }
        }

        return {row_index, nums_of_1s};
    }
};