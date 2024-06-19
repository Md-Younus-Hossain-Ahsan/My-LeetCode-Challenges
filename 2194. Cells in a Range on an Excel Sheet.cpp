//2194. Cells in a Range on an Excel Sheet

class Solution {
public:
    vector<string> cellsInRange(string s) {
        
        char col1 = s[0], col2 = s[3];
        int row1 = s[1] - '0', row2 = s[4] - '0';   
        vector<string> output;
        
        for(char c = col1; c <= col2; c++)
        {
            for(int i = row1; i <= row2; i++)
            {
                string a = "";
                a += c;
                a += to_string(i);
                output.push_back(a);
            }
        }
        
        return output;
    }
};