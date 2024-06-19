//1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        stringstream ss(sentence);
        string word;
        int res = 1;
        
        while (ss >> word) 
        {
            if(isPrefix(word, searchWord))
                return res;
            res++;
        }

        return -1;
    }

    bool isPrefix(string word, string pref){

        for(int i=0; i < pref.size(); i++)
        {
            if(word[i] != pref[i])
                return false;
        }

        return true;
    }
};