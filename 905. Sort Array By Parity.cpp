//905. Sort Array By Parity

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int len = nums.size();
        int low = 0, high = len-1;
        vector<int> output(len);

        for(int i=0; i < len; i++)
        {
            if(nums[i] % 2 == 0)
                output[low++] = nums[i];
            else
                output[high--] = nums[i];
        }

        return output;
    }
};