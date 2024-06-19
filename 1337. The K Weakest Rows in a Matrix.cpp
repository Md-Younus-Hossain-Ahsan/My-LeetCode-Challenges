//1337. The K Weakest Rows in a Matrix

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int m = mat.size();
        int n = mat[0].size();
        vector<pair<int, int>> res;
        vector<int> output;
        
        for(int i = 0; i < m; i++) 
        {
            res.push_back({NumOfSoldiers(mat[i]), i});
        }
        
        sort(res.begin(), res.end());
        
        for(int i = 0; i < k; i++) 
        {
            output.push_back(res[i].second);
        }
        
        return output;
    }
    
    int NumOfSoldiers(vector<int>& row) {
        
        int ones = 0;
        
        for(int i : row)
        {
            ones += i;
        }
        
        return ones;
    }
};