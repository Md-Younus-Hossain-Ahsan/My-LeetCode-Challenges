//2351. First Letter to Appear Twice

class Solution {
public:
    char repeatedCharacter(string s) {
        
        char a;
        unordered_map<char, int> check;
        
        for(char c : s)
        {
            check[c]++;
            
            if(check[c] > 1)
            {
                a = c;
                break;
            }
        }
        
        return a;
    }
};