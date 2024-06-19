//2042. Check if Numbers Are Ascending in a Sentence

class Solution {
public:
    bool areNumbersAscending(string s) {
        
        stringstream ss(s);
        string word;
        int prev = 0, curr = 0;
        
        while(ss >> word)
        {
            if(isalpha(word[0]))
                continue;
            else
            {
                curr = stoi(word);
                
                if(curr <= prev)
                    return false;
                
                prev = curr;
            }
        }
        
        return true;
    }
};