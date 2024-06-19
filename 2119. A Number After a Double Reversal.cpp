//2119. A Number After a Double Reversal

class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        return num == makeReverse(makeReverse(num));
    }
    
    int makeReverse(int n) {
        
        int rev = 0;
        
        while(n != 0)
        {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        
        return rev;
    }
};