//1051. Height Checker

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> nums(heights.begin(), heights.end());
        sort(nums.begin(), nums.end());
        int mismatch=0;

        for(int i=0; i < nums.size(); i++)
        {
            if(heights[i] != nums[i])
                mismatch++;
        }

        return mismatch;        
    }
};