//2248. Intersection of Multiple Arrays

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        vector<int> res;
        unordered_map<int, int> mp;
        int numArrays = nums.size();
        
        for(const auto& row : nums) 
        {
            for(const auto& num : row) 
            {
                mp[num]++;
            }
        }
        
        for(const auto& [num, count] : mp) 
        {
            if(count == numArrays)
                res.push_back(num);
        }
        
        sort(res.begin(), res.end());
        
        return res;
    }
};
