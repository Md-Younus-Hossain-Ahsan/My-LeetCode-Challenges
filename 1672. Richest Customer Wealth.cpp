//1672. Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int numRows = accounts.size();
        int numCols = accounts.empty() ? 0 : accounts[0].size();
        int sum, max_wealth = 0;

        for(int i=0; i < numRows; i++)
        {
            sum = 0;
            for(int j=0; j < numCols; j++)
            {
                sum += accounts[i][j];
            }

            if(sum > max_wealth)
                max_wealth = sum;
        }

        return max_wealth;

    }
};