//2243. Calculate Digit Sum of a String

class Solution {
public:
    string digitSum(string s, int k) {
        
        int len = s.size();
        string get = "";
        
        while(len > k)
        {
            for (int i = 0; i < len; i += k) 
            {
                int length = min(k, len - i);            
                get += addDigits(s.substr(i, length));

            }
            
            len = get.size();
            s = get;
            get = "";
        }
        
        return s;        
    }
    
    string addDigits(string s) {
        
        int sum = 0;
        
        for(char c : s)
        {
            sum += c - '0';
        }
        
        return to_string(sum);
    }
};