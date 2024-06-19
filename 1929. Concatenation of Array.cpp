//1929. Concatenation of Array

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int len = nums.size();
        vector<int> ans(2*len);

        for(int i=0; i<len; i++)
        {
            ans[i] = nums[i];
        }

        for(int i=len; i<2*len; i++)
        {
            ans[i] = nums[i-len];
        }

        return ans;

    }
};