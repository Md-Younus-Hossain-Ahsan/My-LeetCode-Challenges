//2399. Check Distances Between Same Letters

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        
        string str;
        unordered_map<char, pair<int, int>> mp;
        
        for(int i=0; i < s.size(); i++)
        {
            mp[s[i]].first = abs(mp[s[i]].first - i);
            mp[s[i]].second++;
            
            if(mp[s[i]].second == 1)
                str += s[i];
        }
        
        for(char c : str)
        {
            int value = (int) c - 97;
            if(distance[value] != mp[c].first-1)
                return false;
        }
        
        return true;        
    }
};