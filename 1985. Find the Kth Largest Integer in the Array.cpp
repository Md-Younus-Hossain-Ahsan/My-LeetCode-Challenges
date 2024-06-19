//1985. Find the Kth Largest Integer in the Array

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        
        auto comp = [](const string& a, const string& b) 
        {
            if (a.size() == b.size()) 
            {
                return a < b;
            }
            return a.size() < b.size();
        };
        
        sort(nums.begin(), nums.end(), comp);        
        
        return nums[nums.size() - k];   
    }
};