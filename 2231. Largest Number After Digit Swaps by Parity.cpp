//2231. Largest Number After Digit Swaps by Parity

class Solution {
public:
    int largestInteger(int num) {
        
        vector<int> digits;
        vector<int> odd_digits;
        vector<int> even_digits;
                
        while (num != 0) 
        {
            int digit = num % 10;
            digits.push_back(digit);
            
            if (digit % 2 == 0)
                even_digits.push_back(digit);
            else
                odd_digits.push_back(digit);
            
            num /= 10;
        }
        
        sort(even_digits.begin(), even_digits.end(), greater<int>());
        sort(odd_digits.begin(), odd_digits.end(), greater<int>());

        reverse(digits.begin(), digits.end());
        
        num = 0;
        int odd_index = 0;
        int even_index = 0;

        for (int digit : digits)
        {
            num *= 10;
            
            if (digit % 2 == 0) 
                num += even_digits[even_index++];
            else 
                num += odd_digits[odd_index++];
        }

        return num;
    }
};