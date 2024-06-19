//1030. Matrix Cells in Distance Order

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        
        vector<vector<int>> result;
        
        for (int i = 0; i < rows; ++i) 
        {
            for (int j = 0; j < cols; ++j) 
            {
                int distance = abs(i - rCenter) + abs(j - cCenter);
                result.push_back({i, j, distance});
            }
        }
        
        sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[2] < b[2];
        });
        
        for (auto& cell : result) 
            cell.pop_back();
        
        return result;

    }
};