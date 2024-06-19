//908. Smallest Range I

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        
        int minNum = *min_element(nums.begin(), nums.end());
        int maxNum = *max_element(nums.begin(), nums.end());
        
        int diff = maxNum - minNum;
        int minScore = max(0, diff - 2 * k);
        
        return minScore;

    }
};