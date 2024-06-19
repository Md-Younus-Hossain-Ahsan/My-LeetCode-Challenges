//1768. Merge Strings Alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string merged;
        int p = 0, q = 0, len1 = word1.size(), len2 = word2.size();

        for(int i=0; i < len1 + len2; i++)
        {
            if(p < len1)
                merged.push_back(word1[p++]);
            if(q < len2)
                merged.push_back(word2[q++]);
        }

        return merged;
    }
};