//2520. Count the Digits That Divide a Number

class Solution {
public:
    int countDigits(int num) {
        
        int n = num;
        int count = 0;
        
        while(n != 0)
        {
            if(num % (n % 10) == 0)
                count++;
            n /= 10;
        }
        
        return count;
    }
};