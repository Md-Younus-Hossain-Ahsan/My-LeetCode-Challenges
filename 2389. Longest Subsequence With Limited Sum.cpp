//2389. Longest Subsequence With Limited Sum

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        vector<int> nums2;        
        vector<int> res;        
        sort(nums.begin(), nums.end());
        nums2.push_back(nums[0]);
        
        for(int i=1; i < nums.size(); i++)
        {
            int j = nums2.size();
            nums2.push_back(nums2[j-1] + nums[i]);
        }
        
        for(int i=0; i < queries.size(); i++)
        {
            auto j = upper_bound(nums2.begin(), nums2.end(), queries[i]);
            res.push_back(j-nums2.begin());
        }
        
        return res;
    }
};