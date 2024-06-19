//2185. Counting Words With a Given Prefix

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int pref_found = 0;

        for(int i=0; i < words.size(); i++)
        {
            if(isPrefix(words[i], pref))
                pref_found++;
        }

        return pref_found;
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