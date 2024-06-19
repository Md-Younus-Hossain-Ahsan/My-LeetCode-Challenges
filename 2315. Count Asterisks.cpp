//2315. Count Asterisks

class Solution {
public:
    int countAsterisks(string s) {
        
        int star = 0;
        stack<char> bar;
        
        for(char c : s)
        {
            if(c == '|' && bar.empty())
                bar.push(c);
            else if(c == '|' && !bar.empty())
                bar.pop();
            else if(c == '*' && bar.empty())
                star++;
        }
        
        return star;        
    }
};