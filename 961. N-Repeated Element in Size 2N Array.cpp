//961. N-Repeated Element in Size 2N Array

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        
        for(int i : nums)
        {
            mp[i]++;
            
            if(mp[i] == nums.size() / 2)
                return i;
        }
        
        return -1;
    }
};