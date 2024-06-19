//2733. Neither Minimum nor Maximum

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        
        int len = nums.size();

        if(len < 3)
            return -1;
        
        sort(nums.begin(), nums.end());

        return nums[len/2];
        
    }
};