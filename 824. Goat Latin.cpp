//824. Goat Latin

class Solution {
public:
    string toGoatLatin(string sentence) {
        
        int i = 1;
        string word;
        string res;
        stringstream ss(sentence);        
        
        while(ss >> word)
        {
            if(isVowel(word[0]))
            {
                res += word + "ma";
            }
            else
            {
                char c = word[0];
                word.erase(0, 1);
                res += word + c + "ma";
            }
            res.append(i++, 'a');
            res += " ";
        }
        
        res.erase(res.size()-1, 1);
        
        return res;      
    }
    
    bool isVowel(char c) {
        
        c = toupper(c);
        
        return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};