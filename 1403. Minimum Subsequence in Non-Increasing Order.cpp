//1403. Minimum Subsequence in Non-Increasing Order

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        
        int len = nums.size();
        sort(nums.begin(), nums.end());
        int sum1 = accumulate(nums.begin(), nums.end(), 0);
        int sum2 = 0;
        vector<int> res;
        
        for(int i=len-1; sum1 >= sum2 && i >= 0; i--)
        {
            sum2 += nums[i];
            sum1 -= nums[i];
            res.push_back(nums[i]);
        }
        
        return res;        
    }
};