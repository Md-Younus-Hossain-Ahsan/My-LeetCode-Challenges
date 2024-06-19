//1122. Relative Sort Array

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_map<int, int> freq;
        vector<int> result;
        
        for (int num : arr1) 
        {
            freq[num]++;
        }
        
        for (int num : arr2) 
        {
            for (int i = 0; i < freq[num]; ++i) 
            {
                result.push_back(num);
            }
            freq.erase(num);
        }
        
        vector<int> remaining;
        for (auto it = freq.begin(); it != freq.end(); ++it) 
        {
            for (int i = 0; i < it->second; ++i) 
            {
                remaining.push_back(it->first);
            }
        }

        sort(remaining.begin(), remaining.end());
        result.insert(result.end(), remaining.begin(), remaining.end());
        
        return result;
    }
};