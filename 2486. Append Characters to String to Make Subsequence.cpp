//2486. Append Characters to String to Make Subsequence

class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int i = 0; 
        int j = 0;
        int n = s.size();
        int m = t.size();
        
        while (i < n && j < m) 
        {
            if (s[i] == t[j]) 
                j++; 
            
            i++; 
        }
        
        return m - j;
    }
};