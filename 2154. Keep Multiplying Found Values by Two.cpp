//2154. Keep Multiplying Found Values by Two

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        while(true)
        {
            auto it = find(nums.begin(), nums.end(), original);
            if (it == nums.end()) {
                break; 
            }
            original = original * 2;
        }
        
        return original;        
    }
};