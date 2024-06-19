//1089. Duplicate Zeros

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int len = arr.size();
        int zeroes = count(arr.begin(), arr.end(), 0);

        for (int i=len-1, j=len+zeroes - 1; i < j; --i, --j) 
        {
            if (arr[i] == 0) 
            {
                if (j < len) 
                    arr[j] = 0;
                --j;
            }
            if (j < len) 
                arr[j] = arr[i];
        }
    }
};