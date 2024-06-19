//2843. Count Symmetric Integers

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        
        int count = 0;
        
        for(int i=low; i <= high; i++)
        {
            if(isSymmetric(i))
                count++;
        }
        
        return count;
    }
    
    bool isSymmetric(int n) {
        
        int c = 1;
        int sum = 0;
        int digits = floor(log10(n) + 1);
        
        if(digits % 2 != 0)
            return false;
        
        while(c <= digits)
        {
            if(c <= digits / 2)
                sum += n % 10;
            else
                sum -= n % 10;
            
            c++;
            n /= 10;
        }
        
        return sum == 0;        
    }
};