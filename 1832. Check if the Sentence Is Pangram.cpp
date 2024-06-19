//1832. Check if the Sentence Is Pangram

class Solution {
public:
    bool checkIfPangram(string sentence) {

        bool letters[26] = {false};

        for (char ch : sentence) 
        {
            if (isalpha(ch))
                letters[tolower(ch) - 'a'] = true;
        }

        for (bool letter : letters) 
        {
            if (!letter) 
                return false; 
        }

        return true; 
    }
};