//2180. Count Integers With Even Digit Sum

class Solution {
public:
    int countEven(int num) {
        
        int count = 0;
        
        for(int i=1; i <= num; i++)
        {
            if(is_It_With_Even_Digit_Sum(i))
                count++;
        }
        
        return count;
    }
    
    bool is_It_With_Even_Digit_Sum(int n) {
        
        int sum = 0;
        
        while(n != 0)
        {
            sum += n % 10;
            n /= 10;
        }
        
        return sum % 2 == 0;        
    }
};