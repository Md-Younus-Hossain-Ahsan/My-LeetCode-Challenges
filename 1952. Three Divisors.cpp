//1952. Three Divisors

class Solution {
public:
    bool isThree(int n) {
        
        int divisors = 2; 
		//Initialized "divisors" to 2, as every number has at least 2 divisors: 1 and itself.

        for(int i=2; i <= n/2; i++)
        {
            if(n % i == 0)
                divisors++;
        }

        return divisors == 3;
    }
};