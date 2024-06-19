//1073. Adding Two Negabinary Numbers

class Solution {
public:
    vector<int> addNegabinary(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int> result;
        int carry = 0;
        int i = arr1.size() - 1, j = arr2.size() - 1;
        
        while (i >= 0 || j >= 0 || carry != 0) {
            if (i >= 0) carry += arr1[i--];
            if (j >= 0) carry += arr2[j--];
            result.push_back(carry & 1);
            carry = -(carry >> 1);
        }
        
        while (result.size() > 1 && result.back() == 0) {
            result.pop_back();
        }
        
        std::reverse(result.begin(), result.end());
        
        return result;
    }
};