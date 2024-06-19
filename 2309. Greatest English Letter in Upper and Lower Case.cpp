//2309. Greatest English Letter in Upper and Lower Case

class Solution {
public:
    string greatestLetter(string s) {
        
        char m = 'A';
        string f = "";
        unordered_map<char, int> found;
        
        for(char c : s)
        {
            if(islower(c))
            {
                found[c]++;
            }
        }
        
        for(char c : s)
        {
            if(isupper(c))
            {
                char a = tolower(c);
                if(found[a] > 0)
                {
                    if(a > m)
                        m = a;
                }
                    
            }
        }
        
        if(found[tolower(m)] == 0 && m == 'A')
            return f;
        
        f += toupper(m);        
        return f;        
    }
};