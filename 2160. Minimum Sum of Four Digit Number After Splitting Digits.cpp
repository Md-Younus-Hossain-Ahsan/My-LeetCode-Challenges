//2160. Minimum Sum of Four Digit Number After Splitting Digits

class Solution {
public:
    int minimumSum(int num) {
        
        vector<int> n;
        
        while(num != 0)
        {
            n.push_back(num % 10);
            num /= 10;
        }
        
        sort(n.begin(), n.end());
        
        return n[0]*10+n[3] + n[1]*10+n[2];         
    }
};