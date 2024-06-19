//1237. Find Positive Integer Solution for a Given Equation

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {

        vector<vector<int>> result;
        
        for (int x = 1; x <= 1000; ++x) {
            for (int y = 1; y <= 1000; ++y) {
                if (customfunction.f(x, y) == z) {
                    result.push_back({x, y});
                }
            }
        }
        
        return result;
        
    }
};