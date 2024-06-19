//2544. Alternating Digit Sum

class Solution {
public:
    int alternateDigitSum(int n) {
        
        int sum = 0;
        int digits = floor(log10(n) + 1);
        int sign = digits % 2 == 0 ? -1 : 1;
        
        while(n != 0)
        {
            sum = sum + n % 10 * sign;
            n /= 10;
            sign *= -1;
        }
        
        return sum;
    }
};