//1021. Remove Outermost Parentheses

class Solution {
public:
    string removeOuterParentheses(string s) {
        string output;
        int open = 0;

        for (char c : s) 
        {
            if (c == '(' && open > 0) 
                output += c;

            if (c == ')' && open > 1)
                output += c;

            if (c == '(') 
                open++;
            else 
                open--;
        }

        return output;
    }
};