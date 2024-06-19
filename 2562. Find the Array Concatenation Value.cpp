//2562. Find the Array Concatenation Value

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
      
        long long concatValue = 0;
        
        while (!nums.empty()) 
        {
            if (nums.size() > 1) 
            {
                int first = nums.front();
                int last = nums.back();
                concatValue += concatenate(first, last);
                nums.pop_back();
                nums.erase(nums.begin());
            } 
            else 
            {
                concatValue += nums.front();
                nums.pop_back();
            }
        }
        
        return concatValue;
    }
    
    int concatenate(int num1, int num2) {
        
        int numDigits = 1;
        int temp = num2;
        
        while (temp > 0) 
        {
            temp /= 10;
            numDigits *= 10;
        }
        
        return num1 * numDigits + num2;
    }
};