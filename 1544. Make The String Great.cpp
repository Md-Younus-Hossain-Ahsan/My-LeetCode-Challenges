//1544. Make The String Great

class Solution {
public:
    string makeGood(string s) {
        
        stack<char> st;
        string res;
        
        for(char c : s)
        {
            if(!st.empty())
            {
                char t = tolower(c);
                char u = toupper(c);
                if(isupper(c) && st.top() == t)
                    st.pop();
                else if(islower(c) && st.top() == u)
                    st.pop();
                else
                    st.push(c);
            }
            else
                st.push(c);
        }
        
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};