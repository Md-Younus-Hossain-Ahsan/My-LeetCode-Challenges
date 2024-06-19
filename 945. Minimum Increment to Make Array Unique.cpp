//945. Minimum Increment to Make Array Unique

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        if (nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        
        int moves = 0;
        int target = nums[0];
        
        for (int i = 1; i < nums.size(); i++) 
        {
            if (nums[i] <= target) 
            {
                moves += target - nums[i] + 1;
                nums[i] = target + 1; 
            }
            target = nums[i];
        }
        
        return moves;
    }
};