//2427. Number of Common Factors

class Solution {
public:
    int commonFactors(int a, int b) {
        
        int res = 1;

        if(a == b && a > 1)
            res++;

        for(int i=2; i <= a/2; i++)
        {
            if(a % i == 0 && b % i == 0)
                res++;
        }

        return res;
    }
};