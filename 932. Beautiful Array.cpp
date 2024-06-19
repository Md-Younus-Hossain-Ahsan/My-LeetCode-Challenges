//932. Beautiful Array

class Solution {
public:
    vector<int> beautifulArray(int n) {

        if (n == 1) 
            return {1};
        
        vector<int> even = beautifulArray(n / 2);
        vector<int> odd = beautifulArray((n + 1) / 2);
        
        vector<int> result;
        for (int x : even) 
            result.push_back(2 * x);
        
        for (int x : odd) 
            result.push_back(2 * x - 1);
                
        return result;

    }
};