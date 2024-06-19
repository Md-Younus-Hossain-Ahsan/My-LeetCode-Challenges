//2441. Largest Positive Integer That Exists With Its Negative

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        int len = nums.size();
        int max = -1;

        if(len < 2)
            return -1;

        sort(nums.begin(), nums.end());

        for(int i=0; i < len; i++)
        {
            if(nums[i] > max && binary_search(nums.begin(), nums.end(), -nums[i]))
                max = nums[i];
        }

        return max;

    }
};