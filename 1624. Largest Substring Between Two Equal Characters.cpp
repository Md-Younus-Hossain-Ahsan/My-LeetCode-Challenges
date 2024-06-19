//1624. Largest Substring Between Two Equal Characters

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        unordered_map<char, int> firstOccurrence;
        int maxLength = -1;

        for (int i = 0; i < s.size(); i++) 
        {
            if (firstOccurrence.find(s[i]) == firstOccurrence.end()) 
            {
                firstOccurrence[s[i]] = i;
            } 
            else 
            {
                int length = i - firstOccurrence[s[i]] - 1;
                maxLength = max(maxLength, length);
            }
        }

        return maxLength;
    }
};