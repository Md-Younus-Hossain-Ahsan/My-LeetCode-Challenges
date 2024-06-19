//1399. Count Largest Group

class Solution {
public:
    int countLargestGroup(int n) {
        
        int max = 0;
        int count = 0;
        unordered_map<int , int> mp;
        
        for(int i=1; i <= n; i++)
        {
            mp[getSum(i)]++;
            
            if(mp[getSum(i)] > max)
            {
                count = 1;
                max = mp[getSum(i)];
            }
            else if(mp[getSum(i)] == max)
                count++;
        }
        
        return count;        
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