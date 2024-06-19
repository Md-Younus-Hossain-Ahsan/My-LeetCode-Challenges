//2085. Count Common Words With One Occurrence

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        int appears = 0;
        unordered_map<string, int> store1;
        unordered_map<string, int> store2;
        
        for(string s : words1)
        {
            store1[s]++;
        }
        
        for(string s : words2)
        {
            store2[s]++;
        }
        
        for(string s : words1)
        {
            if(store1[s] == 1 && store2[s] == 1)
                appears++;
        }
        
        return appears;        
    }
};