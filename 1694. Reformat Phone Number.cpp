//1694. Reformat Phone Number

class Solution {
public:
    string reformatNumber(string number) {
        
        string res;
        string onlyNum;
        
        for(char c : number)
        {
            if(isdigit(c))
                onlyNum += c;
        }
        
        int i = 0;
        int len = onlyNum.size();
        
        while(i < len) 
        {
            if(len - i > 4) {
                res += onlyNum.substr(i, 3) + "-";
                i += 3;
            } 
            else if(len - i == 4) 
            {
                res += onlyNum.substr(i, 2) + "-" + onlyNum.substr(i + 2, 2);
                i += 4;
            } 
            else 
            {
                res += onlyNum.substr(i, len - i);
                i = len;
            }
        }
        
        if (!res.empty() && res.back() == '-') 
        {
            res.pop_back();
        }
        
        return res;
    }
};