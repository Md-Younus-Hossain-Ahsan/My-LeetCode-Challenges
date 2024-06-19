//2788. Split Strings by Separator

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        
        vector<string> result;
        string temp;
        
        for(string s : words)
        {
            for(char c : s)
            {
                if(c == separator)
                {
                    if (!temp.empty()) 
                    {
                        result.push_back(temp);
                        temp = "";
                    }
                }
                else
                    temp += c;
            }
            
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        }
        
        return result;            
    }  
};