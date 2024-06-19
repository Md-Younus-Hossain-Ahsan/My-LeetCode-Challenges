169. Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int length = nums.size();
        if (length == 0) return -1; 
        
        int resultant_element = nums[0];
        int resultant_frequency = 1;
        int frequency = 1;

        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < length - 1; i++) {
            if(nums[i] == nums[i + 1]) {
                frequency++;
            } else {
                if(frequency > length / 2 && frequency > resultant_frequency) {
                    resultant_frequency = frequency;
                    resultant_element = nums[i];
                }
                frequency = 1; 
            }
        }
        
        
        if (frequency > length / 2 && frequency > resultant_frequency) {
            resultant_element = nums[length - 1];
        }
        
        return resultant_element;
    }
};