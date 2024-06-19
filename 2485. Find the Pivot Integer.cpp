//2485. Find the Pivot Integer

class Solution {
public:
    int pivotInteger(int n) {
        
        int left = 0, right = 0;
        int sum = n * (n + 1) / 2;

        for(int i=0; i <= n; i++)
        {
            left += i;
            right = sum - left + i;

            if(left == right)
            return i;
        }

        return -1;
    }
};