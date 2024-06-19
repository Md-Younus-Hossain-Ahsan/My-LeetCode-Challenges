//448. Find All Numbers Disappeared in an Array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> output;
        sort(nums.begin(), nums.end());

        int n = nums.size();
        for (int i = 1; i <= n; i++) {
            if (!binary_search(nums.begin(), nums.end(), i)) {
                output.push_back(i);
            }
        }

        return output;
    }
};