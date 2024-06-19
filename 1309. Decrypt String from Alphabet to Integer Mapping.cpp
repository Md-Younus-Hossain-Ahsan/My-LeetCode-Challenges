//1309. Decrypt String from Alphabet to Integer Mapping

class Solution {
public:
    string freqAlphabets(string s) {
        
        string output = "";
        int i = 0;
        
        while (i < s.size()) 
        {
            int prev = s[i] - '0';
            int now = 0;
            
            if (i + 2 < s.size() && s[i + 2] == '#') 
            {
                now = (prev * 10) + (s[i + 1] - '0');
                i += 3;
            } 
            else 
            {
                now = prev;
                ++i;
            }
            output += (char)(now + 96);
        }
        
        return output;
    }
};