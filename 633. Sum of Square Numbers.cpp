//633. Sum of Square Numbers

class Solution {
public:
    bool judgeSquareSum(int c) {
        
        int a, b, sqr_b;
        
        for(int a=0; a <= sqrt(c); a++)
        {
            sqr_b = c - a * a;
            b = sqrt(sqr_b);
            
            if(a * a + b * b == c && b * b == sqr_b)
                return true;
        }
        
        return false;        
    }
};