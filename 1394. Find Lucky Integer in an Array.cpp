//1394. Find Lucky Integer in an Array

class Solution {
public:
    int findLucky(vector<int>& arr) {
                
        arr.push_back(0);
        unordered_map<int, int> mp;
        sort(arr.begin(), arr.end(), greater<int>());
        
        for(int i=0; i < arr.size()-1; i++)
        {
            mp[arr[i]]++;
            
            if(mp[arr[i]] == arr[i] && arr[i] != arr[i+1])
                return arr[i];
	    }
        
        return -1;
    }
};