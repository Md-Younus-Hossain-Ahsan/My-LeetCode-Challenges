//2578. Split With Minimum Sum

class Solution {
public:
    int splitNum(int num) {
        
        vector<int> n;
        int n1 = 0, n2 = 0;
        
        while(num != 0)
        {
            n.push_back(num % 10);
            num /= 10;
        }
        
        sort(n.begin(), n.end());
        int i = 0, len = n.size();
        
        while(true)
        {
            if(i < len)
            {
                n1 = n1 * 10 + n[i];
                i++;
            }
            
            if(i < len)
            {
                n2 = n2 * 10 + n[i];
                i++;
            }
            
            if(i == len)
                break;
        }
        
        return n1 + n2;
    }
};