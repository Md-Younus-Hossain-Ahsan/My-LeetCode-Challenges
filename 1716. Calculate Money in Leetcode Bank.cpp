//1716. Calculate Money in Leetcode Bank

class Solution {
public:
    int totalMoney(int n) {
        
        int day = 0;
        int week = 0;
        int initial = 0;
        int totalMoney = 0;
        
        while(day < n)
        {
            if(day % 7 == 0)
            {
                week++;
                initial = week;
            }
            else
                initial++;
            
            day++;
            totalMoney += initial;
        }
        
        return totalMoney;
    }
};