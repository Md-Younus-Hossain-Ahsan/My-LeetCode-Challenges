//2423. Remove Letter To Equalize Frequency

class Solution {
public:
    bool equalFrequency(string word) {
        
        unordered_map<char, int> mp;
        
        for (char c : word) {
            mp[c]++;
        }
        
        vector<int> freq;
        for (auto& p : mp) {
            freq.push_back(p.second);
        }
        
        sort(freq.begin(), freq.end());
        
        int n = freq.size();
        
        if(n < 2)
            return true;
        
        if(freq[0] == 1 && freq[1] == freq[n-1]) 
            return true;
        
        if(freq[0] == freq[n-2] && freq[n-2] + 1 == freq[n-1])
            return true;
        
        return false;
    }
};