//1464. Maximum Product of Two Elements in an Array

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int len = nums.size();
        sort(nums.begin(), nums.end());
        return (nums[len-2] - 1) * (nums[len-1] - 1);
        
    }
};