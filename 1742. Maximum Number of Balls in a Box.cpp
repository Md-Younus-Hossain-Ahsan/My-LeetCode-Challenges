//1742. Maximum Number of Balls in a Box

class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        
        int max = 0;
        unordered_map<int, int> mp;
        
        for(int i=lowLimit; i <= highLimit; i++)
        {
            int get = getSum(i);            
            mp[get]++;
            
            if(mp[get] > max)
                max = mp[get];
        }
        
        return max;
    }
    
    int getSum(int n) {
        
        int sum = 0;
        
        while(n != 0)
        {
            sum += n % 10;
            n /= 10;
        }
        
        return sum;
    }
};