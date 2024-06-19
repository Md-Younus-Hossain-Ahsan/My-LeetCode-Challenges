//2656. Maximum Sum With Exactly K Elements

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
        int i = 0;
        int sum = 0;
        int max = INT_MIN;
        
        for(int n : nums)
        {
            if(n > max)
                max = n;
        }
        
        while(i < k)
        {
            sum += max;
            max++;
            i++;
        }
        
        return sum;        
    }
};