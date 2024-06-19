//3005. Count Elements With Maximum Frequency

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        int max = 0, c = 0;
        unordered_map<int, int> mp;
        
        for(int i : nums)
        {
            mp[i]++;
            
            if(mp[i] > max)
            {
                max = mp[i];
                c = 0;
            }
            
            if(mp[i] == max)
            {
                c++;
            }            
        }
        
        return max * c;
    }
};