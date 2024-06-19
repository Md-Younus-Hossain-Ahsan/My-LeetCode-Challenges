//1979. Find Greatest Common Divisor of Array

class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int max = INT_MIN, min = INT_MAX;

        for(int i=0; i < nums.size(); i++)
        {
            if(nums[i] > max)
                max = nums[i];
            if(nums[i] < min)
                min = nums[i];
        }

        return calculateGCD(min, max);
    }

    int calculateGCD(int s, int l) {

        int i = 2, GCD = s; 

        while(true)
        {
            if(l % GCD == 0)
                return GCD;
            if(s % i == 0)
                GCD = s / i;
            i++;
        }

        return 1;
    }
};