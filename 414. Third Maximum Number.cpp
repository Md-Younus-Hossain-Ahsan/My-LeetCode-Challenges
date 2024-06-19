//414. Third Maximum Number

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        long first_max = numeric_limits<long>::min();
        long second_max = numeric_limits<long>::min();
        long third_max = numeric_limits<long>::min();

        for(int i=0; i <= nums.size()-1; i++)
        {
            if(nums[i] > first_max)
            {
                third_max = second_max;   
                second_max = first_max;
                first_max = nums[i];
            }
            if(nums[i] > second_max && nums[i] < first_max)
            {
                third_max = second_max;   
                second_max = nums[i];
            }
            if(nums[i] > third_max && nums[i] < second_max && nums[i] < first_max)
                third_max = nums[i];            
        }

        if (third_max == numeric_limits<long>::min() || third_max == second_max) {
            return first_max;
        }

        return third_max;

    }
};