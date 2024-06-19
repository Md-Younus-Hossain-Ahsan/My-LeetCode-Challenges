//2283. Check if Number Has Equal Digit Count and Digit Value

class Solution {
public:
    bool digitCount(string num) {
        
        for(int i=0; i < num.size(); i++)
        {
            char c = i + '0';
            
            if(countingFrequency(c, num) != num[i] - '0')
                return false;
        }
        
        return true;
    }
    
    int countingFrequency(char c, string s)
    {
        int count = 0;
        
        for(char a : s)
        {
            if(a == c)
                count++;
        }
        
        return count;
    }
};