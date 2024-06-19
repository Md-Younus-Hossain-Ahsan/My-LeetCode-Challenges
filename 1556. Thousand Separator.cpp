//1556. Thousand Separator

class Solution {
public:
    string thousandSeparator(int n) {
                
        if(n < 1000)
            return to_string(n);
        
        int j=0;
        string res;
        string temp = to_string(n);       
        
        for(int i=temp.size()-1; i >= 0; i--)
        {            
            res += temp[i]; 
            j++;
            
            if(j == 3 && i != 0)
            {
                res += ".";    
                j = 0;
            }     
        }  
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};