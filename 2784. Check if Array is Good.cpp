//2784. Check if Array is Good

class Solution {
public:
    bool isGood(vector<int>& nums) {
        
        int len = nums.size();
        sort(nums.begin(), nums.end());

        for(int i=0; i < len-1; i++)
        {
            if(nums[i] != i+1)
                return false;
        }

        if(nums[len-1] != len-1)
            return false;

        return true;

    }
};