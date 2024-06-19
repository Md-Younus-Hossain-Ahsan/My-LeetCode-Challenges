//1748. Sum of Unique Elements

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int sum = 0;
        unordered_map<int, int> mp;
        
        for(int i : nums)
        {
            mp[i]++;
        }
        
        for(int i : nums)
        {
            if(mp[i] == 1)
                sum += i;
        }
        
        return sum;
    }
};