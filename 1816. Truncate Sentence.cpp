//1816. Truncate Sentence

#include <string>

class Solution {
public:
    string truncateSentence(string s, int k) {
        
        int count = 0;
        int pos = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                count++;
                if (count == k) {
                    pos = i;
                    break;
                }
            }
        }

        if (count < k) {
            return s;
        }

        return s.substr(0, pos);
    }
};