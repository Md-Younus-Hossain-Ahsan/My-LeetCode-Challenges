13. Roman to Integer

class Solution {
public:
    int romanToInt(string s) {
        
        map<char, int> roman_to_int;
        
        roman_to_int.insert(make_pair('I', 1));
        roman_to_int.insert(make_pair('V', 5));
        roman_to_int.insert(make_pair('X', 10));
        roman_to_int.insert(make_pair('L', 50));
        roman_to_int.insert(make_pair('C', 100));
        roman_to_int.insert(make_pair('D', 500));
        roman_to_int.insert(make_pair('M', 1000));
        
        int len = s.length();
        int i=0, num, sum=0;
        
        while(i<len)
        {
            if((i == (len-1)) || (roman_to_int[s[i]] >= roman_to_int[s[i+1]]))
            {
                num = roman_to_int[s[i]];
                i++;
            }
            else
            {
                num = roman_to_int[s[i+1]] - roman_to_int[s[i]];
                i += 2;
            }            
            sum += num;
        }
        return sum;
        
    }
};