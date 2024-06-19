//1404. Number of Steps to Reduce a Number in Binary Representation to One

class Solution {
public:
    int numSteps(string s) {
        
        int steps = 0;
        int carry = 0;
        int index = s.size() - 1;
        
        while (index > 0) {
            if (s[index] - '0' + carry == 1) 
            {
                steps += 2; 
                carry = 1;  
            }
            else 
                steps++; 
            
            index--;
        }
        
        return steps + carry; 
    }
};