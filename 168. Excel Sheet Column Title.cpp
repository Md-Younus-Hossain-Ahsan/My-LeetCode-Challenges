//168. Excel Sheet Column Title

class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string columnTitle;
        
        while (columnNumber > 0) {
            int remainder = (columnNumber - 1) % 26;
            char ch = 'A' + remainder; 
            columnTitle.push_back(ch);
            columnNumber = (columnNumber - 1) / 26; 
        }
        
        reverse(columnTitle.begin(), columnTitle.end()); 
        return columnTitle;

    }
};