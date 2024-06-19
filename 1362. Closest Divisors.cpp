//1362. Closest Divisors

class Solution {
public:
    vector<int> closestDivisors(int num) {
        
        vector<int> result = {1, num + 1}; 
        
        for (int i = 2; i * i <= num + 2; ++i) {
            if ((num + 1) % i == 0) { 
                result = {i, (num + 1) / i};
            }
            if ((num + 2) % i == 0) { 
                result = {i, (num + 2) / i};
            }
        }
        
        return result;

    }
};