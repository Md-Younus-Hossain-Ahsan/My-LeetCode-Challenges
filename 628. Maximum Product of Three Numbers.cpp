//628. Maximum Product of Three Numbers

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int maxProduct = nums[n - 1] * nums[n - 2] * nums[n - 3];
        
        if (nums[0] < 0 && nums[1] < 0) 
        {
            maxProduct = max(maxProduct, nums[0] * nums[1] * nums[n - 1]);
        }
        
        return maxProduct;

    }
};