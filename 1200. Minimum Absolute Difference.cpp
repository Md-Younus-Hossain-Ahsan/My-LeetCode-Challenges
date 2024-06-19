//1200. Minimum Absolute Difference

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        int min = INT_MAX;
        vector<vector<int>> res;
        unordered_map<int, int> mp;
        
        sort(arr.begin(), arr.end());
        
        for(int i=1; i < arr.size(); i++)
        {
            int diff = abs(arr[i-1] - arr[i]);
            mp[i] = diff;
            if(min > diff)
                min = diff;
        }
        
        for(int i=1; i < arr.size(); i++)
        {
            if(mp[i] == min)
                res.push_back({arr[i-1], arr[i]});
        }
        
        return res;
    }
};