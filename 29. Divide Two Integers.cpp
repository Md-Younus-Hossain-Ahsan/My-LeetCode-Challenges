//29. Divide Two Integers

class Solution {
public:
    int divide(int dividend, int divisor) {
        
		if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        
        long long dividendLL = abs((long long)dividend);
        long long divisorLL = abs((long long)divisor);
        
        int sign = (dividend < 0) ^ (divisor < 0)? -1 : 1;

        long long result = 0;
		
        while (dividendLL >= divisorLL) {
            
			long long temp = divisorLL;
            long long multiple = 1;
            
            while ((temp << 1) <= dividendLL) {
                temp <<= 1;
                multiple <<= 1;
            }
            dividendLL -= temp; 
            result += multiple; 
        }
        
        return sign * result;
    }
};
