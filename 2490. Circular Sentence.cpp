//2490. Circular Sentence

class Solution {
public:
    bool isCircularSentence(string sentence) {
        
        string word;
        stringstream ss(sentence);
        char prev = sentence[sentence.size()-1];
        
        while(ss >> word)
        {
            if(word[0] != prev)
                return false;
            
            prev = word[word.size()-1];
        }
        
        return true;
    }
};