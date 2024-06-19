137. Single Number II

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int length = nums.size();
        if (length == 0) return -1;
        else if (length == 1) return nums[0];
        
        int resultant_frequency = 1;
        int frequency = 1;

        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < length - 1; i++) 
        {
            if(nums[i] == nums[i + 1]) 
            {
                frequency++;
            } else 
            {
                if(frequency == 1) 
                {
                    return nums[i];
                }
            frequency = 1; 
            }
        }
        
        if(frequency == 1) 
        {
            return nums[length - 1];
        }
        
        return -1;
        
    }
};