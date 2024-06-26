//264. Ugly Number II

class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n);
        ugly[0] = 1;
        
        int i2 = 0, i3 = 0, i5 = 0;
        int next_multiple_of_2 = 2;
        int next_multiple_of_3 = 3;
        int next_multiple_of_5 = 5;
        
        for (int i = 1; i < n; ++i) {
            ugly[i] = min(next_multiple_of_2, min(next_multiple_of_3, next_multiple_of_5));
            
            if (ugly[i] == next_multiple_of_2) {
                ++i2;
                next_multiple_of_2 = ugly[i2] * 2;
            }
            if (ugly[i] == next_multiple_of_3) {
                ++i3;
                next_multiple_of_3 = ugly[i3] * 3;
            }
            if (ugly[i] == next_multiple_of_5) {
                ++i5;
                next_multiple_of_5 = ugly[i5] * 5;
            }
        }
        
        return ugly[n - 1];
    }
};