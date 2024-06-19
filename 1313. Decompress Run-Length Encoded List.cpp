//1313. Decompress Run-Length Encoded List

class Solution {
public:
    vector<int> decompressRLElist(std::vector<int>& nums) {
        
        vector<int> result;

        for (int i = 0; i < nums.size(); i += 2) 
        {
            int freq = nums[i];
            int val = nums[i + 1];
            for (int j = 0; j < freq; ++j) 
                result.push_back(val);            
        }

        return result;
    }
};