//910. Smallest Range II

class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int min_score = nums[n - 1] - nums[0]; 

        for (int i = 0; i < n - 1; ++i) 
        {
            int max_val = max(nums[i] + k, nums[n - 1] - k);
            int min_val = min(nums[0] + k, nums[i + 1] - k);
            min_score = min(min_score, max_val - min_val);
        }

        return min_score;

    }
};