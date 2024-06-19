//1903. Largest Odd Number in String

class Solution {
public:
    string largestOddNumber(string num) {
        
        for(int i=num.size()-1; i >= 0; i--)
        {
            if(num[i] % 2 == 0)
            {
                num.erase(i, 1);
                continue;
            }
            else
                return num;
        }
        
        return "";        
    }
};