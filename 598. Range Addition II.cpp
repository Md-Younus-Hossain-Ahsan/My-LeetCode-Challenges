//598. Range Addition II

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minAi = m, minBi = n;
        
        for (auto& op : ops) {
            minAi = min(minAi, op[0]);
            minBi = min(minBi, op[1]);
        }
        
        return minAi * minBi;
    }
};