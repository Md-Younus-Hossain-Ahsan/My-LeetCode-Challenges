//2367. Number of Arithmetic Triplets

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        int count = 0;
        unordered_map<int, int> countMap;

        for (int num : nums) 
        {            
            if (countMap.count(num - diff) && countMap.count(num - 2 * diff)) 
                count += countMap[num - diff] * countMap[num - 2 * diff];
                        
            countMap[num]++;
        }

        return count;
    }
};