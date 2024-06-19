//58. Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int len;
        stringstream ss(s);
        string word;
        
        while(ss >> word)
        {
            len = word.size();
        }
        
        return len;        
    }
};