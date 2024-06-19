//1160. Find Words That Can Be Formed by Characters

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int sum = 0;
        unordered_map<char, int> mp;
        
        for(char c : chars)
        {
            mp[c]++;
        }
        
        for(string s : words)
        {
            if(filter(s, mp))
            {
                sum += s.size();
            }
        }
        
        return sum;        
    }
    
    bool filter(string s, unordered_map<char, int>& mp) {
        
        unordered_map<char, int> as;
        
        for(char c : s)
        {
            as[c]++;
            
            if(as[c] > mp[c])
                return false;
        }
        
        return true;        
    }
};