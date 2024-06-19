//728. Self Dividing Numbers

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> divisor;
        int temp, digit;

        for(int i=left; i <= right; i++)
        {

            temp = i;
            while(temp)
            {
                digit = temp%10;
                
                if(digit == 0)
                    break;
                else if(i % digit != 0)
                    break;
                    
                temp /= 10;
            }

            if(!temp)
                divisor.push_back(i);

        }

        return divisor;

    }
};