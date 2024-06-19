//258. Add Digits

class Solution {
public:
    int addDigits(int num) {
      
        if(num == 0)
            return 0;

        int sum = 0;

        while(true)
        {  
            sum = 0;  
            while(num)
            {
                sum = sum + num%10;
                num /= 10;
            }

            if(sum < 10)
                return sum;
            else
                num = sum;
        }

        return -1;            
      
    }
};