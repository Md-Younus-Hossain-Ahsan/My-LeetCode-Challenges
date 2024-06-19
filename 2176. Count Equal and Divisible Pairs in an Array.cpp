//2176. Count Equal and Divisible Pairs in an Array

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        
        int count = 0;
        int len = nums.size();
        
        for(int i=0; i < len-1; i++)
        {
            for(int j=i+1; j < len; j++)
            {
                if(nums[i] == nums[j] && (i*j) % k == 0)
                    count++;
            }
        }
        
        return count;
    }
};