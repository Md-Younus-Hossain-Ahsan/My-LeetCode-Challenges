class Solution {
public:
    string makeFancyString(string s) {
        
        if (s.size() < 3) 
            return s;
          
        int count = 1;
        string fancyString;
        fancyString += s[0];      
        
        for (int i = 1; i < s.size(); i++) 
        {
            if (s[i] == s[i - 1]) 
                count++; 
            else
                count = 1;
            
            if (count <= 2)
                fancyString += s[i];             
        }
        
        return fancyString;
    }
};
