//2206. Divide Array Into Equal Pairs

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        int pair = 0, len = nums.size();
        
        if(len % 2 == 1)
            return false;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i < len; i+=2)
        {
            if(nums[i] != nums[i+1])
                return false;
        }
        
        return true;
    }
};