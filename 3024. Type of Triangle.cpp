//3024. Type of Triangle

class Solution {
public:
    string triangleType(vector<int>& nums) {
        
        if(nums[0] == 0 || nums[1] == 0 || nums[2] == 0)
            return "none";
        
        if(nums[0] + nums[1] <= nums[2] || nums[1] + nums[2] <= nums[0] || nums[2] + nums[0] <= nums[1])
            return "none";
        
        if(nums[0] == nums[1] && nums[1] == nums[2])
            return "equilateral";
        
        if(nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2])
            return "isosceles";
        
        return "scalene";
    }
};