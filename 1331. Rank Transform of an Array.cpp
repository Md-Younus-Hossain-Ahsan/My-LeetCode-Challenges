//1331. Rank Transform of an Array

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        int rank = 1;
        vector<int> res;
        vector<int> arr2 = arr;
        unordered_map<int, int> mp;
        sort(arr2.begin(), arr2.end());
        
        for(int i=0; i < arr2.size(); i++)
        {
            if (mp.find(arr2[i]) == mp.end()) 
                mp[arr2[i]] = rank++;
        }
        
        for(int i : arr)
        {
            res.push_back(mp[i]);
        }
        
        return res;
    }
};