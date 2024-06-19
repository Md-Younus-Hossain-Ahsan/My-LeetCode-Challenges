//806. Number of Lines To Write String

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        
        int line = 1;
        int width = 0;
        
        for(char c : s)
        {
            width += widths[(int) c - 97];
            
            if(width > 100)
            {
                width = widths[(int) c - 97];
                line++;
            }
        }
        
        return {line, width};        
    }
};