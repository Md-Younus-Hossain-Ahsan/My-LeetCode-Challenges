//1356. Sort Integers by The Number of 1 Bits

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
                
        sort(arr.begin(), arr.end(), [&](int a, int b) 
        {
            int countA = countBits(a);
            int countB = countBits(b);
            if (countA == countB) 
                return a < b;
            
            return countA < countB;
        });

        return arr;
    }
        
    int countBits(int n) {
        
        int count = 0;
        while (n > 0) 
        {
            count += n & 1;  
            n >>= 1;       
        }
        
        return count;
    }
};