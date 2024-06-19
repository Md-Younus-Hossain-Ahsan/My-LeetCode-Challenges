//989. Add to Array-Form of Integer

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        int n = num.size();
        vector<int> result;
        int carry = 0;
        
        for (int i = n - 1; i >= 0 || k > 0; --i) 
        {
            int digit = k % 10 + carry;
            if (i >= 0) digit += num[i];
            carry = digit / 10;
            result.push_back(digit % 10);
            k /= 10;
        }
        
        if (carry) result.push_back(carry);
        
        reverse(result.begin(), result.end());
        return result;

    }
};