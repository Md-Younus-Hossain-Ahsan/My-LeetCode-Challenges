//260. Single Number III

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> res;
        int len = nums.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i < len-1; i++)
        {            
            if(nums[i] - nums[i+1] == 0)
            {
                i++;
                continue;
            }
            
            res.push_back(nums[i]);                           
        }
        
        if(nums[len-2] - nums[len-1] != 0)
            res.push_back(nums[len-1]); 
        
        return res;
    }
};