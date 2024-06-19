//844. Backspace String Compare

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return processString(s) == processString(t);
    }

    string processString(string& str) {
        
        stack<char> st;

        for (char c : str) 
        {
            if (c == '#' && !st.empty()) 
            {
                st.pop();
            } 
            else if (c != '#') {
                st.push(c);
            }
        }
        
        string result;

        while (!st.empty()) 
        {
            result = st.top() + result;
            st.pop();
        }
        
        return result;
    }
};