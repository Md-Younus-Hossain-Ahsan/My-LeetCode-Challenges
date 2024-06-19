//888. Fair Candy Swap

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
        int sum1 = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sum2 = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        int diff = (sum1 - sum2) / 2;
        
        unordered_set<int> aliceSet(aliceSizes.begin(), aliceSizes.end());
        
        for (int j : bobSizes) 
        {
            int i = j + diff;
            
            if (aliceSet.count(i))
                return {i, j};
        }
        
        return {};
    }
};