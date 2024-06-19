//1822. Sign of the Product of an Array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int neg_sign_found = 0;
        
        for(int i : nums)
        {
            if(i == 0)
                return 0;
            
            if(i < 0)
                neg_sign_found++;
        }
        
        return neg_sign_found % 2 == 0 ? 1 : -1;
    }
};