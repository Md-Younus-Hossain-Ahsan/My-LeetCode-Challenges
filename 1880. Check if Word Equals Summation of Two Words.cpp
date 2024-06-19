//1880. Check if Word Equals Summation of Two Words

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        return FindValue(firstWord) + FindValue(secondWord) == FindValue(targetWord);
    }
    
    int FindValue(string s)
    {
        int n = 0;
        
        for(char c : s)
        {
            n = n * 10 + (int) c - 97;
        }
        
        return n;
    }
};