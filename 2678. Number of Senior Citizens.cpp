//2678. Number of Senior Citizens

class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int count = 0, n;
        
        for(string s : details)
        {
            n = s[11] - '0';
            n = n * 10 + s[12] - '0';
            
            if(n > 60)
                count++;
        }
        
        return count;        
    }
};