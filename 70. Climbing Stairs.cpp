//70. Climbing Stairs

class Solution {
public:
    int climbStairs(int n) {
        
        if (n <= 2) return n;
        
        vector<int> dp(n + 1);
        dp[1] = 1; 
        dp[2] = 2; 
        
        for (int i=3; n >= i; i++) 
        {
            dp[i] = dp[i - 1] + dp[i - 2]; 
        }
        
        return dp[n];
		
    }
};