//1991. Find the Middle Index in Array

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int left = 0;
        int sum = accumulate(nums.begin(), nums.end(), 0);

        for(int i=0; i < nums.size(); i++)
        {
            if(left == sum - left - nums[i])
                return i;

            left += nums[i];
        }

        return -1;
    }
};