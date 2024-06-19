//1614. Maximum Nesting Depth of the Parentheses

class Solution {
public:
    int maxDepth(string s) {
        
        int max_value=0, count=0;
        stack<char> paren;

        for(int i=0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                paren.push(s[i]);
                count++;
            }
            if(s[i] == ')')
            {
                paren.pop();
                max_value = max(max_value, count);
                count--;
            }
        }

        return max_value;
    }
};