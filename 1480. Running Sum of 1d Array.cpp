//1480. Running Sum of 1d Array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int len = nums.size();
        vector<int> result(len);
        int sum = nums[0];
        result[0] = nums[0];

        for(int i=1; i<len; i++)
        {
            sum += nums[i];
            result[i] = sum;
        }

        return result;

    }
};