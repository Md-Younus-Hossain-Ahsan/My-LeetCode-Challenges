//1909. Remove One Element to Make the Array Strictly Increasing

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int found = 0;
        
        for (int i = 0; i < nums.size() - 1; i++) 
        {
            if (nums[i] >= nums[i + 1]) 
            {
                found++;
                
                if (found > 1) {
                    return false;
                }
                
                if (i > 0 && nums[i - 1] >= nums[i + 1] && i + 2 < nums.size() && nums[i] >= nums[i + 2]) 
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};