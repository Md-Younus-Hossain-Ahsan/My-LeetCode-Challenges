//1945. Sum of Digits of String After Convert

class Solution {
public:
    int getLucky(string s, int k) {
        
        int i = 1;
        s = getValue(s);
        
        while(i <= k)
        {
            s = addValues(s);
            i++;
        }
        
        return stoi(s);        
    }
    
    string getValue(string s) {
        
        string get;
        
        for(char c : s)
        {
            int value = (int) c - 96;
            get += to_string(value);
        }
        
        return get;        
    }
    
    string addValues(string s)
    {
        int get = 0;
        
        for(char c : s)
        {
            get += c - '0';
        }
        
        return to_string(get);
    }
};