//2946. Matrix Similarity After Cyclic Shifts

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        
        int row = mat.size();
        int col = mat[0].size();
        vector<vector<int>> res = mat;
        
        while(k-- != 0)
        {
            for(int i=0; i < row; i++)
            {
                if(i % 2 == 0)
                    res[i] = leftShift(res[i]);
                else
                    res[i] = rightShift(res[i]);
            }
        }
        
        return mat == res;
    }
    
    vector<int> leftShift(vector<int>& mat) {
        
        int i = 1;
        int len = mat.size();
        int first = mat[0];
        
        while(i < len)
        {
            mat[i-1] = mat[i];
            i++;
        }
        
        mat[len-1] = first;        
        return mat;
    }
    
    vector<int> rightShift(vector<int>& mat) {
        
        int len = mat.size();
        int last = mat[len-1];
        int i = len - 1;        
        
        while(i > 0)
        {
            mat[i] = mat[i-1];
            i--;
        }
        
        mat[0] = last;        
        return mat;
    }
};