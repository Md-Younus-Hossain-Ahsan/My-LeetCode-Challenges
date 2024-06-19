//1935. Maximum Number of Words You Can Type

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        stringstream ss(text);
        string word;
        int correct = 0;
        
        while(ss >> word)
        {
            bool hi = true;
            for(char c : brokenLetters)
            {
                if (word.find(c) != string::npos)
                {
                    hi = false;                
                    break;
                }
            }
            
            if(hi)
                correct++;
        }
        
        return correct;        
    }
};