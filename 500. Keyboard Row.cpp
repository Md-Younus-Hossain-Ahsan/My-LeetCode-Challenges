//500. Keyboard Row

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        vector<string> output;
        unordered_set<char> firstRow{'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
        unordered_set<char> secondRow{'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
        unordered_set<char> thirdRow{'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
        
        for (const string& word : words) 
        {
            if (checkRow(word, firstRow) || checkRow(word, secondRow) || checkRow(word, thirdRow)) {
                output.push_back(word);
            }
        }
        
        return output;
    }
    
    bool checkRow(const string& word, const unordered_set<char>& row) {
        for (char c : word) {
            if (row.count(toupper(c)) == 0) {
                return false;
            }
        }
        return true;
    }
};