//2465. Number of Distinct Averages

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        
        int len = nums.size();
        int left = 0, right = len-1;
        vector<float> avg;
        sort(nums.begin(), nums.end());

        while(left < right)
        {
            avg.push_back((float) (nums[left++] + nums[right--]) / 2.0);
        }

        set<float> distinctElements(avg.begin(), avg.end());

        return distinctElements.size();
    }
};