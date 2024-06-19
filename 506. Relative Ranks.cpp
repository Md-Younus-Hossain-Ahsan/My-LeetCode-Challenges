//506. Relative Ranks

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<string> res;
        int n = score.size();
        vector<int> sorted = score;        
        unordered_map<int, int> rankMap;
        sort(sorted.begin(), sorted.end(), greater<int>());
        
        for (int i=0; i < n; i++) 
        {
            rankMap[sorted[i]] = i;
        }

        for (int i=0; i < n; i++) 
        {
            int rank = rankMap[score[i]];
            
            if (rank == 0)
                res.push_back("Gold Medal");
            else if (rank == 1)
                res.push_back("Silver Medal");
            else if (rank == 2)
                res.push_back("Bronze Medal");
            else
                res.push_back(to_string(rank+1));
        }

        return res;
    }
};