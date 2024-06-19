//922. Sort Array By Parity II

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        vector<int> odd, even;
        int j=0, len = nums.size();

        for(int i=0; i < len; i++)
        {
            if(nums[i] % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }

        for(int i=0; i < len/2; i++)
        {
            nums[j++] = even[i];
            nums[j++] = odd[i];
        }

        return nums;
    }
};