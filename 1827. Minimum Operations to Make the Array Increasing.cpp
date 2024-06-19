//1827. Minimum Operations to Make the Array Increasing

class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int op = 0;
        int len = nums.size();
        
        for(int i=1; i < len; i++)
        {
            if(nums[i-1] >= nums[i])
            {
                int update = nums[i-1] - nums[i] + 1;
                op += update;
                nums[i] += update;
            }
        }
        
        return op;
    }
};