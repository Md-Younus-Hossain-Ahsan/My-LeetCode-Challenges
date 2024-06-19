//1608. Special Array With X Elements Greater Than or Equal X

class Solution {
public:
    int specialArray(vector<int>& nums) {
        
        int x = 1;
        sort(nums.begin(), nums.end());
        
        while(x <= nums[nums.size()-1])
        {
            int count = 0;            
            for(int i : nums)
            {
                if(i >= x)
                    count++;
                if(x < count)
                    break;
            }            
            if(x == count)
                return x;            
            x++;
        }
        
        return -1;
    }
};