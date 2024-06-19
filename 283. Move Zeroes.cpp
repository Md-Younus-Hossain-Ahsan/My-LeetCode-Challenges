//283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int> output;
        int len = nums.size(), j = 0;

        for(int i=0; i < len; i++)
        {
            if(nums[i] != 0)
                swap(nums[i], nums[j++]);           
        }
    }
};