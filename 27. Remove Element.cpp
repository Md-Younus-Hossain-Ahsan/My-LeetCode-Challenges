//27. Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int k=0, length = nums.size();
        
        for(int i=0; i <= length-1; i++)
        {
            if(nums[i] != val)
            {
                nums[k] = nums[i];     
                k++;
            }
        }
        
        return k;        
    }
};