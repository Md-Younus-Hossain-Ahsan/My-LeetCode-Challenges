//3079. Find the Sum of Encrypted Integers

class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        
        int sum = 0;
        
        for(int i : nums)
        {
            sum += encrypt(i);
        }
        
        return sum;
    }
    
    int encrypt(int N) {
        
        int max = 0;
        int Encrypted_N = 0;
        int digit = floor(log10(N) + 1);
        
        if(digit == 1)
            return N;
        
        while(N != 0)
        {
            if(N % 10 > max)
                max = N % 10;
            
            N /= 10;
        }
        
        while(digit-- != 0)
        {
            Encrypted_N = Encrypted_N * 10 + max;
        }
        
        return Encrypted_N;
    }
};