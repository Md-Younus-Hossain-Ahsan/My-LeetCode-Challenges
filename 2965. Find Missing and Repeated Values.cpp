//2965. Find Missing and Repeated Values

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        vector<int> ans(2);
        vector<int> val;
        int dup = -1, missing = -1;
        int n = grid.size();

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                val.push_back(grid[i][j]);
            }
        }

        sort(val.begin(), val.end());

        for (int i = 0; i < n * n - 1; ++i) {
            if (val[i] == val[i + 1]) {
                dup = val[i];
                break;
            }
        }

        for (int i = 1; i <= n * n; ++i) {
            if (!binary_search(val.begin(), val.end(), i)) {
                missing = i;
                break;
            }
        }

        ans[0] = dup;
        ans[1] = missing;
        return ans;
    }
};