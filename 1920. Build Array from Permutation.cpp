//1920. Build Array from Permutation

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        int len = nums.size();
        vector<int> result(len);

        for(int i=0; i<len; i++)
        {
            result[i] = nums[nums[i]];
        }

        return result;

    }
};