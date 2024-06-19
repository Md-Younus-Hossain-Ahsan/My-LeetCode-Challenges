//1859. Sorting the Sentence

class Solution {
public:
    string sortSentence(string s) {
        
        stringstream ss(s);
        string word;
        unordered_map<int, string> wordMap;

        while (ss >> word) 
        {
            int pos = word.back() - '0';
            word.pop_back();
            wordMap[pos] = word;
        }

        string result;

        for (int i = 1; i <= wordMap.size(); ++i) 
        {
            result += wordMap[i];
            if (i < wordMap.size()) 
            {
                result += ' ';
            }
        }

        return result;
    }
};