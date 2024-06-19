//2006. Count Number of Pairs With Absolute Difference K

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        int count = 0;
        unordered_map<int, int> freqMap;

        for (int num : nums) 
        {
            count += freqMap[num - k] + freqMap[num + k];
            freqMap[num]++;
        }

        return count;
    }
};