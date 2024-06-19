//2744. Find Maximum Number of String Pairs

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        
        int pair = 0;
        string rev;

        for(int i=0; i < words.size()-1; i++)
        {
            for(int j=i+1; j < words.size(); j++)
            {
                rev = words[j];
                reverse(rev.begin(), rev.end());
                if(words[i] == rev)
                {
                    pair++;
                    break;
                }
            }
        }

        return pair;
    }
};