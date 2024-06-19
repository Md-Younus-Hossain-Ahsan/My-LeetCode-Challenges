//1365. How Many Numbers Are Smaller Than the Current Number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int> counts(nums.size());

        for (int i=0; i < nums.size(); i++) 
        {
            int count = 0;

            for (int j=0; j < nums.size(); j++) 
            {
                if (i != j && nums[j] < nums[i]) 
                    count++;
            }

            counts[i] = count;
        }

        return counts;

    }
};