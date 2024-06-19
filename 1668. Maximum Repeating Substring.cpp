//1668. Maximum Repeating Substring

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        
        int maxK = 0;
        int m = sequence.size();
        int n = word.size();

        for (int k = 1; k <= m / n; ++k) 
        {
            string concatWord = "";
            for (int i = 0; i < k; ++i) 
            {
                concatWord += word;
            }
            
            if (sequence.find(concatWord) != string::npos) 
                maxK = k;
            else                 
                break;
        }

        return maxK;
    }
};