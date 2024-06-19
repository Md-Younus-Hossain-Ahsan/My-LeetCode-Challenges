//2357. Make Array Zero by Subtracting Equal Amounts

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int i, len = nums.size();
        int iter = 0, temp, pos_min;

        A : pos_min = INT_MAX;

        for(i=0; i<len; i++)
        {
            if(nums[i] < pos_min && nums[i] > 0)
            {
                pos_min = nums[i];
            }
        }

        if(pos_min < INT_MAX)
            iter++;

        temp = 0;

        for(i=0; i<len; i++)
        {
            if(nums[i] > 0)
            {
                nums[i] -= pos_min;
            }
            if(nums[i] > 0)
            {
                temp = 1;
            }
        }

        if(temp == 1)
            goto A;
        else if(temp == 0)
            return iter;
        
        return -1;

    }
};