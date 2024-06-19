//946. Validate Stack Sequences

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int> res;
        int j = 0;
        
        for (int i : pushed) 
        {
            res.push(i);
            
            while (!res.empty() && res.top() == popped[j]) 
            {
                res.pop();
                j++;
            }
        }
        
        return res.empty();
    }
};