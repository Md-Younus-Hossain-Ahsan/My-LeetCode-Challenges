//2614. Prime In Diagonal

class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        
        int max = 0;
        int n = nums.size();

        for(int i=0; i < n; i++)
        {
            if(max == nums[i][i] || max == nums[i][n-i-1])
                continue;
            
            if(isPrime(nums[i][i]) && nums[i][i] > max)
                max = nums[i][i];

            if(isPrime(nums[i][n-i-1]) && nums[i][n-i-1] > max)
                max = nums[i][n-i-1];
        }

        return max;
    }

    bool isPrime(int n) {

        if (n < 2) 
            return false;
        if (n == 2) 
            return true; 
        if (n % 2 == 0) 
            return false; 

        for (int i = 3; i*i <= n; i += 2) 
        {
            if (n % i == 0) 
                return false;
        }

        return true;
    }
};